#include <stdio.h>
#include <stdlib.h>

typedef struct atleta{
    char nome[50];
    int idade;
    float altura;
}Atleta;

void main(){
    Atleta a[4];
    int maisVelho = 0;
    float maisAlto = 0;

    for (int i = 0; i < 4; i++){
        scanf("%s", a[i].nome);
        scanf("%d", &a[i].idade);
        scanf("%f", &a[i].altura);
    }    
    
    for (int i = 0; i < 4; i++){
        if (a[i].idade > maisVelho){
            maisVelho = a[i].idade;
        }
        if(a[i].altura > maisAlto){
            maisAlto = a[i].altura;
        }
    }

    for (int i = 0; i < 4; i++){
        if (a[i].altura == maisAlto){
            printf("Mais alto: %s\n", a[i].nome);
        }
    }

    for (int i = 0; i < 4; i++){
        if (a[i].idade == maisVelho){
            printf("Mais velho: %s\n", a[i].nome);
        }
    }
}