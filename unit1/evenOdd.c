#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main(int argc, char** argv){

    if (argc != 2) {
        printf("Error program: U need to insert a number, e.g: ./%s argv[1]\n", argv[0] );
        return 0;
    }

    bool isANumber = (argv[1][0] >= 48 && argv[1][0] <= 57);

    if ( !isANumber)  {
        printf("Error program: U need to insert a number, e.g: %s 8\n", argv[0] );
        return 0;
    }


    int numberToTest = atoi(argv[1]);
    int result = numberToTest % 2;
    bool hasModule = (result > 0);

    if (hasModule) {
        printf("The number is odd\n");

    } else {
        printf("The number is even\n");
        
    }
    return 0;
}