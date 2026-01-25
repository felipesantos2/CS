#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// #define EITA 0
#define EITA 0 // pre-processamento

const int eita1 = 6;

int main() {

    char f[] = {'f', 't', '5'};

    printf("%d \n", INT_MAX);

    printf("%s \n", __FILE__);
    printf("%d \n", __LINE__);

    printf("%s \n", __DATE__);

    printf("%s \n", __PRETTY_FUNCTION__);
    
    printf("%ld \n", atol("11nggg"));
    
    printf("---------------------------------------------\n");
    printf("#define: %d \n", EITA);
    
    printf("const:   %d \n", eita1);
    //convert strin to long int


    return EXIT_SUCCESS; // EXIST_FAILURE
}
