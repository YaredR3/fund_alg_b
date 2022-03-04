#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero = 14, i=1, count=0;

    while (i <= numero){
        if (numero% i==0){
            count++;
        }
        i++;
    }
    if (count==2){
        printf("El número es primo");
    }
    else{
        printf("El número no es primo");
    }

 return 0;
}