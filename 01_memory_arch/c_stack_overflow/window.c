#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>

// Definindo códigos de cores manuais (Hex -> Int)
// No X11 antigo, cores são alocadas, mas em TrueColor (moderno) é direto.
#define PRETO 0x000000
#define VERMELHO 0xFF0000
#define VERDE 0x00FF00
#define AZUL 0x0000FF

int main() {
    Display *d;
    Window w;
    XEvent e;
    int s;
    
    // ESTADO: Nossa variável que controla a cor atual
    unsigned long cor_atual = PRETO;

    d = XOpenDisplay(NULL);
    if (d == NULL) exit(1);

    s = DefaultScreen(d);

    w = XCreateSimpleWindow(d, RootWindow(d, s), 10, 10, 400, 300, 1,
                            BlackPixel(d, s), WhitePixel(d, s));

    // Agora ouvimos ButtonPress (Clique do Mouse) também!
    XSelectInput(d, w, ExposureMask | KeyPressMask | ButtonPressMask);

    XMapWindow(d, w);

    while (1) {
        XNextEvent(d, &e);

        if (e.type == Expose) {
            // Define a cor de "Foregound" (caneta) no Contexto Gráfico (GC)
            XSetForeground(d, DefaultGC(d, s), cor_atual);
            
            // Desenha o quadrado com a cor atual
            XFillRectangle(d, w, DefaultGC(d, s), 100, 100, 200, 100);
            
            // Reseta para preto para escrever o texto
            XSetForeground(d, DefaultGC(d, s), PRETO);
            XDrawString(d, w, DefaultGC(d, s), 110, 150, "Clique em mim!", 14);
        }

        if (e.type == ButtonPress) {
            // e.xbutton contém as coordenadas do clique
            int x = e.xbutton.x;
            int y = e.xbutton.y;

            printf("Clique detectado em: X=%d, Y=%d\n", x, y);

            // Lógica de colisão básica (Hit Testing)
            // Se o clique foi dentro do quadrado (100,100 até 300,200)
            if (x >= 100 && x <= 300 && y >= 100 && y <= 200) {
                printf("Acertou o quadrado! Mudando cor...\n");
                
                // Alterna cores (lógica simples)
                if (cor_atual == PRETO) cor_atual = VERMELHO;
                else if (cor_atual == VERMELHO) cor_atual = VERDE;
                else cor_atual = PRETO;

                // Importante: Mandar limpar a área ou forçar redesenho
                // XClearWindow limpa tudo e gera um evento Expose automaticamente
                XClearWindow(d, w); 
            }
        }

        if (e.type == KeyPress)
            break;
    }

    XCloseDisplay(d);
    return 0;
}