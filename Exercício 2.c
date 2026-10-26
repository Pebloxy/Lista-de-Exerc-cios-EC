/*
Exercício 2
Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool Até 25 litros, desconto de 2% por litro
Acima de 25 litros, desconto de 4% por litro

Gasolina Até 25 litros, desconto de 3% por litro
Acima de 25 litros, desconto de 5% por litro
*/

#include <stdio.h>

int main(void)
{
    float litros;
    float precoGasolina = 4.0;
    float precoAlcool = 3.0;
    float total, desconto;
    char combustivel;
    do {
        printf("\nQual o combustível? (A - Álcool / G - Gasolina / S - Sair): ");
        scanf(" %c", &combustivel);
        if (combustivel == 'S' || combustivel == 's') {
            break;
        }
        printf("Quantos litros?: ");
        scanf("%f", &litros);
        if (litros <= 0) {
            break;
        }
        if (combustivel == 'A' || combustivel == 'a') {
            if (litros <= 25) {
                desconto = 0.02;
            } else {
                desconto = 0.04;
            }
            total = litros * (precoAlcool * (1 - desconto));
            printf("Total a pagar (Álcool): R$ %.2f\n", total);
        } else if (combustivel == 'G' || combustivel == 'g') {
            if (litros <= 25) {
                desconto = 0.03;
            } else {
                desconto = 0.05;
            }
            total = litros * (precoGasolina * (1 - desconto));
            printf("Total a pagar (Gasolina): R$ %.2f\n", total);
        } else {
            printf("Opção de combustível inválida!\n");
        }
    } while (litros > 0);
    return 0;
}