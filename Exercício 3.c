// Exercício 3

#include <stdio.h>

int main(void) {
    int opcao;
    int quantidade;
    float total_pedido = 0.0;
    char continuar_pedido = 's';

    do {
        printf("\n=== CARDÁPIO DA LANCHONETE ===\n");
        printf("[1] - Cachorro-Quente (R$ 8,00)\n");
        printf("[2] - X-Salada (R$ 12,00)\n");
        printf("[3] - Suco Natural (R$ 6,00)\n");
        printf("[4] - Fechar Pedido / Sair\n");
        printf("Digite o código do item desejado: ");
        scanf("%d", &opcao);

        if (opcao == 4) {
            break;
        }

        switch (opcao) {
            case 1:
                printf("Quantos Cachorros-Quentes você deseja?: ");
                scanf("%d", &quantidade);
                if (quantidade <= 0) {
                    printf("Quantidade inválida!\n");
                    break;
                }
                total_pedido += quantidade * 8.00;
                printf("\n--> Adicionado! Subtotal parcial: R$ %.2f\n", total_pedido);
                break;

            case 2:
                printf("Quantos X-Saladas você deseja?: ");
                scanf("%d", &quantidade);
                if (quantidade <= 0) {
                    printf("Quantidade inválida!\n");
                    break;
                }
                total_pedido += quantidade * 12.00;
                printf("--> Adicionado! Subtotal parcial: R$ %.2f\n", total_pedido);
                break;

            case 3:
                printf("Quantos Sucos Naturais você deseja?: ");
                scanf("%d", &quantidade);
                if (quantidade <= 0) {
                    printf("Quantidade inválida!\n");
                    break;
                }
                total_pedido += quantidade * 6.00;
                printf("--> Adicionado! Subtotal parcial: R$ %.2f\n", total_pedido);
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

        printf("\nDeseja adicionar mais algum item ao seu pedido? (s/n): ");
        scanf(" %c", &continuar_pedido);

    } while (continuar_pedido == 's' || continuar_pedido == 'S');

    printf("\n========================================\n");
    printf("Pedido encerrado. Total geral a pagar: R$ %.2f\n", total_pedido);
    printf("Obrigado pela preferência! Volte sempre.\n");
    printf("========================================\n");

    return 0;
}