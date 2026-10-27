// Exercício 6

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void) {
    int numero_maximo = 50;
    int numero_secreto = 0;
    int chute = 0;
    int max_tentativas = 5;
    int acertou = 0;
    char continuar = 's';

    srand(time(NULL));
    numero_secreto = (rand() % numero_maximo) + 1;

    while (continuar == 's' || continuar == 'S') {
        printf("\n=== JOGO DE ADIVINHAÇÃO ===\n");
        printf("Tente adivinhar o número secreto entre 1 e %d.\n", numero_maximo);
        printf("Você tem %d tentativas!\n\n", max_tentativas);

        acertou = 0;

        for (int tentativa = 1; tentativa <= max_tentativas; tentativa++) {
            printf("Tentativa %d de %d - Digite seu chute: ", tentativa, max_tentativas);
            scanf("%d", &chute);

            if (chute == numero_secreto) {
                printf("\nParabéns! Você acertou o número secreto %d em %d tentativa(s)!\n", numero_secreto, tentativa);
                acertou = 1;
                break;
            } else if (chute > numero_secreto) {
                printf("O número secreto é MENOR que %d.\n\n", chute);
            } else {
                printf("O número secreto é MAIOR que %d.\n\n", chute);
            }
        }

        if (!acertou) {
            printf("\nGame Over! Você esgotou suas %d tentativas. O número secreto era %d.\n\n", max_tentativas, numero_secreto);
        }

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &continuar);
        
        if (continuar == 's' || continuar == 'S') {
            numero_secreto = (rand() % numero_maximo) + 1;
        }
    }

    printf("\nAté logo!\n");
    return 0;
}