#include <stdio.h>
#include <stdlib.h>
#include "../libraries/utils.h"


int main(int argc, char** argv){

    for (int i = 10; i <= 50; i = i + 10){ //el ultimo tambien se puede expresar como i += 10
        printf("%d: \n", i);
        sleep (1000);
        for (int j = 1; j <= 3; j++){
            printf("\t %d: \n", j);
            sleep (1000);
        }
            for (int z = 1; z <= 3; z++){
                printf("\t\t ... \n");
                sleep (1000);
            }
    }
    return 0;
}
