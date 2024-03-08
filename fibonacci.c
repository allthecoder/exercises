#include <stdio.h>

int isFibonacci(int num) {
    int n1 = 0, n2 = 1, exchangeValue;
    
    // Se for 0 ou 1 já pertence à Fibonacci e não há necessidade de cálcular
    if (num == 0 || num == 1) 
        return 1;

    // Calcula a sequência de Fibonacci até que o número calculado seja maior que o fornecido
    while (n2 <= num) {
        exchangeValue = n2;
        n2 = n1 + n2;
        n1 = exchangeValue;
        if (n2 == num)
            return 1;
    }
    
    // Caso não pertença, retorna 0
    return 0;
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (isFibonacci(num)){
        printf("%d pertence a sequencia de Fibonacci.\n", num);
    }
    else{
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);
    }

}
