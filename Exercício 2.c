// Exercício 2

#include <stdio.h>

int main(void) {
    int numero = 0;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        printf("\n--- TABUADA AUTOMATIZADA ---\n");
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Erro: O número deve ser positivo!\n\n");
            continue;
        }

        printf("\nTabuada do %d:\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\nDeseja calcular outra tabuada? (s/n): ");
        scanf(" %c", &continuar);
        
        while (getchar() != '\n');
    }

    printf("\nAté logo!\n");
    return 0;
}