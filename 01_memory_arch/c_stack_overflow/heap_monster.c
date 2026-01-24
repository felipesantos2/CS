#include <stdio.h>
#include <stdlib.h>

// gcc -o heap_monster heap_monster.c
int main() {

    // aloca na na heap dados muito grandes
    int *mal = malloc(sizeof(int) * 10000000); //

    free(mal);

    return 0;
}
