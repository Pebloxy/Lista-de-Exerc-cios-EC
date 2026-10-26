/*
Exercício 5
A empresa Compre+ decidiu dar um aumento de salário aos seus colaboradores e necessita 
de um programa que calcule esses reajustes. Esse programa deve receber o salário de um 
colaborador e fazer o reajuste seguindo os seguintes critérios, baseado no salário atual 
informado
*/

#include <stdio.h>
int main( void )
{
    float salario;
    float percentual;
    float aumento;
    float novoSalario; 
    salario = 0;
    percentual = 0;
    aumento = 0;
    novoSalario = 0;
    printf("digite seu saláro atual: \n" );  
    scanf("%f", &salario);  
     while (salario < 0) {
        printf("digite um saláro válido: \n" );
        scanf("%f", &salario);  
    }
    if (salario <= 250){     
        percentual = 0.2; 
        aumento = salario * percentual;
    } else if (salario > 250 && salario < 900){     
            percentual = 0.15; 
            aumento = salario * percentual;
        } else if (salario >= 900 && salario < 1500){  
            percentual = 0.1;    
            aumento = salario * percentual; 
            } else{      
                percentual = 0.05; 
                aumento = salario * percentual;
            }      
    novoSalario = salario + aumento;
    printf("Seu salário original: %.2f\n", salario);
    printf("Percentual de aumento aplicado: %.0f%%\n", percentual * 100);
    printf("O valor do aumento: %.2f\n", aumento);
    printf("Novo salário: %.2f\n", novoSalario);
    return 0;
    }