#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavrasecreta[20];

    sprintf(palavrasecreta,"MELANCIA");
    int acertou = 0;
    int enforcou = 0;


    do {
        char chute;
        scanf(" %c", &chute);

        for (int i = 0; i < strlen(palavrasecreta); i++){
            printf("_ ");
            
        }
        printf("\n\n");
        
        }while(!acertou && !enforcou);
}