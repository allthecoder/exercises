#include <stdio.h>

int main(){
    int index = 13;
    int soma = 0;
    int k = 0;

    for (int i = 0; i < index; i++){
        k = k + 1;
        printf("Valor de k = %d\n", k);
        soma  = soma + k;
        printf("Valor da soma = %d\n", soma);
    }

    printf("Soma final: %d \n",soma);
}