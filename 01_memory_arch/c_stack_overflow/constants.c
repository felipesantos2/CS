#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    char f[] = {'f', 't', '5'};

    printf("%d \n", INT_MAX);

    printf("%s \n", __FILE__);
    printf("%d \n", __LINE__);

    printf("%s \n", __DATE__);

    printf("%s \n", __PRETTY_FUNCTION__);
    
    //convert strin to long int
    printf("%ld \n", atol("11nggg"));


    return EXIT_SUCCESS; // EXIST_FAILURE
}
