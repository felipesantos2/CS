#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// void print_text() { printf("Olá, mundo! \n"); }

void print_text(void);
void print_number(void);
int return_number();
char return_string(char text[]);

int main() {

    char name, last_name = 'F';

    // int bytes_per_type[] = {
    //     sizeof(int),       sizeof(double),   sizeof(float), sizeof(char),
    //     sizeof(short int), sizeof(long int), sizeof(long double),
    // };

    // printf("int in bytes:             %zu \n", sizeof(int));
    // printf("double in bytes:          %zu \n", sizeof(double));
    // printf("float in bytes:           %zu \n", sizeof(float));
    // printf("char in bytes:            %zu \n", sizeof(char));

    // printf("short in bytes:           %zu \n", sizeof(short int));
    // printf("long int in bytes:        %zu \n", sizeof(long int));
    // printf("long double in bytes:     %zu \n", sizeof(long double));

    printf("Call my function. \n");

    printf("------------------------------\n\n\n\n\n\n");

    // print_text();
    // printf("returning a string: %d \n", return_string("Hello, world!"));
    print_number();

    printf("returning a int: %d \n", return_number());

    printf("------------------------------\n\n\n\n\n\n");

    unsigned long int amount = 0;

    printf("%ld", amount);

    return 0;
}

void print_text(void) {
    printf("Olá, Mundo! \n");
    printf("Olá, Mundo! \n");
}

void print_number(void) {
    printf("%d \n", 90);
    printf("%d \n", 90);
    printf("%d \n", 90);
}

int return_number() { return 20; }
