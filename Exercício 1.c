//exercício 3


#include <stdio.h>
#include <unistd.h>

int main(void) {
    int opcao = 0;
    int numero = 0;
    long long int fatorial = 1;
    
    while (1) {
        printf("Olá, seja bem-vindo ao\n");
        printf("menu interativo matemático\n\n");
        
        printf("Digite uma das opções:\n");
        printf("[1] - Fatorial\n");
        printf("[2] - Progressiva\n");
        printf("[3] - Sair\n");
        scanf("%d", &opcao);
        
        if (opcao < 1 || opcao > 3) {
            printf("\nDigite um número válido!\n");
            sleep(2);
            continue;
        } else if (opcao == 1) {
            char continuar = 's';
            while (continuar == 's' || continuar == 'S') {
                printf("\nDigite um número para calcular o fatorial: ");
                scanf("%d", &numero);
                
                fatorial = 1;
                for (int contador = 1; contador <= numero; contador++) {
                    fatorial *= contador;
                }
                printf("A resposta é: %lld\n\n", fatorial);

                printf("Deseja calcular outro fatorial? (s/n): ");
                scanf(" %c", &continuar);
            }
        } else if (opcao == 2) {
            char continuar = 's';
            while (continuar == 's' || continuar == 'S') {
                printf("\nDigite um limite para calcular a progressiva: ");
                scanf("%d", &numero);
                
                printf("Contagem progressiva: ");
                for (int i = 1; i <= numero; i++) {
                    printf("%d ", i);
                }
                printf("\n\n");

                printf("Deseja calcular outra progressiva? (s/n): ");
                scanf(" %c", &continuar);
            }
        } else {
            break;
        }
    }

    printf("Até logo!\n");
    return 0;
}