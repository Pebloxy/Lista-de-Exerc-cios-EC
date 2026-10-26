/*
Exercício 6
Faça um algoritmo investigador criminal. Ele deve fazer 5 perguntas para uma pessoa sobre 
um crime. As perguntas são
*/

#include <stdio.h>
int main( void )
{
int contador; 
int positivas; 
char resposta; 
positivas = 0; 

printf("Bem-vindo ao algoritmo investigador criminal\n");
printf("Responda as perguntas só com Sim ou Não (S = Sim | N = Não)\n");
for (contador = 1; contador <= 5; contador++){
    if (contador == 1) {
        printf("Telefonou para a vítima?\n");
        } else if (contador == 2) {
            printf("Esteve no local do crime?\n");
            } else if (contador == 3) {
                printf("Mora perto da vítima?\n");
                } else if (contador == 4) {
                    printf("Devia para a vítima?\n");
                    } else {
                        printf("Já trabalhou com a vítima?\n");
                        }
    scanf(" %c", &resposta);
    
    while (resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n'){
        printf("Digite uma resposta válida!\n");
        if (contador == 1) {
            printf("Telefonou para a vítima?\n");
            } else if (contador == 2) {
                printf("Esteve no local do crime?\n");
                } else if (contador == 3) {
                    printf("Mora perto da vítima?\n");
                    } else if (contador == 4) {
                        printf("Devia para a vítima?\n");
                        } else {
                            printf("Já trabalhou com a vítima?\n");
                            }

        scanf(" %c", &resposta);
    }
    if (resposta == 'S' || resposta == 's') {
        positivas++;
    }
}   
if (positivas == 2) {
        printf("Classificação: Suspeita\n");
        } else if (positivas == 3 || positivas == 4) {
            printf("Classificação: Cúmplice\n");
            } else if (positivas == 5) {
                printf("Classificação: Assassino\n");
                } else {
                    printf("Classificação: Inocente\n");
                    }
}