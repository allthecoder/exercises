#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *string){
    int begin = 0;
    int end = strlen(string) -1;
    char exchangeValue;

    while(begin < end){
        exchangeValue = string[begin];
        string[begin] = string [end];
        string[end] = exchangeValue;
        begin++;
        end --;
    }
}

// Função para permitir leitura com espaços em C
char *readLine(FILE* input) {
    char *str = NULL;
    int counter = 0;
    char c;

    do {
        c = fgetc(input);
        if (c != '\r') {
            str = realloc(str, sizeof(char) * (counter + 1));
            str[counter++] = c;
        }
    } while (c != '\n' && c != EOF);

    str[--counter] = '\0';
    return str;
}

int main(){
    char *string;

    printf("Digite uma string: \n");

    string = readLine(stdin);

    reverseString(string);

    printf("String invertida: %s\n" ,string);

    // Desalocando a memória utilizada para alocação dessa string
    free(string);
}