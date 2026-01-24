#include <stddef.h>
#include <stdio.h>

int main() {

    int bytes_per_type[] = {
        sizeof(int),       sizeof(double),   sizeof(float),       sizeof(char),
        sizeof(short int), sizeof(long int), sizeof(long double),
    };

    printf("int in bytes:             %zu \n", sizeof(int));
    printf("double in bytes:          %zu \n", sizeof(double));
    printf("float in bytes:           %zu \n", sizeof(float));
    printf("char in bytes:            %zu \n", sizeof(char));

    printf("short in bytes:           %zu \n", sizeof(short int));
    printf("long int in bytes:        %zu \n", sizeof(long int));
    printf("long double in bytes:     %zu \n", sizeof(long double));

    return 0;
}
