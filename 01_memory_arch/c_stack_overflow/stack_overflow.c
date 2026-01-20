// teste

#include <stdio.h>
// #include <header.h>

// #include <std.io>
void main() {
    // int num  = 10;
    int num[10000000];
    // printf("Olá, mundo! %d", num);
    
    // printf("\n");
    
    for (long i = 0; i <= sizeof(num); i++) {
        num[i] = i+1;
        printf("Olá, mundo! %d", num[i]);
    }
}
