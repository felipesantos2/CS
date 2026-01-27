#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// https://drive.google.com/file/d/1JEZ2Egz3a4HPCSmL8ZjuD-Wyeiw9lR85/view?usp=sharing

int main() {

    // declarando e atribuindo em variavéis
    char l[] = "m";

    int r;
    long t;
    long int y;
    unsigned int m;
    unsigned long d;

    float amount = 46.0;
    // x int amount = 46.0;

    bool isTrue = false; // 0
    bool isFalse = !false; // 1
    bool isANumber = 1;

    char name[]  = "Felipe";

    return 0;

}


#include <stdio.h>
#include <stdlib.h>

// gcc -o heap_monster heap_monster.c
int main() {

    // aloca na na heap dados muito grandes
    int *mal = malloc(sizeof(int) * 10000000);

    free(mal);
    
    // stack vs heap

    return 0;
}

