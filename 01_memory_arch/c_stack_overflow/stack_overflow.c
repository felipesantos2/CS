// teste

#include <stdio.h>
// #include <header.h>

// #include <std.io>
int main() {
    // int num  = 10;
    int num[10000000];
    // printf("Olá, mundo! %d", num);

    // printf("\n");

    long size = sizeof(num);

    for (long i = 0; i <= size; i++) {
        num[i] = i+1;
        printf("Olá, mundo! %d", num[i]);
    }

    return 0;
}


// output: Segmentation fault (core dumped)