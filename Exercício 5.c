// Exercício 5

#include <stdio.h>
#include <unistd.h>

int main(void) {
    int opcao = 0;
    float saldo = 1000.00;
    float valor_transacao = 0.0;
    int valor_saque = 0;
    int notas_100 = 0, notas_50 = 0, notas_20 = 0, notas_10 = 0;
    char continuar = 's';

    while (1) {
        printf("\n=== CAIXA ELETRÔNICO ===\n");
        printf("[1] - Saldo\n");
        printf("[2] - Saque\n");
        printf("[3] - Depósito\n");
        printf("[4] - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 4) {
            printf("\nOpção inválida! Escolha entre 1 e 4.\n");
            sleep(2);
            continue;
        }

        switch (opcao) {
            case 1: {
                char escolha = 's';
                printf("\n--- CONSULTA DE SALDO ---\n");
                printf("Seu saldo atual é: R$ %.2f\n\n", saldo);

                printf("Deseja voltar ao menu principal? (s/n): ");
                scanf(" %c", &escolha);

                if (escolha == 'n' || escolha == 'N') {
                    printf("\nDesligando o caixa eletrônico. Até logo!\n");
                    return 0;
                }
                break; 
            }
            case 2:
                continuar = 's';
                while (continuar == 's' || continuar == 'S') {
                    printf("\n--- OPERAÇÃO DE SAQUE ---\n");
                    printf("Saldo disponível: R$ %.2f\n", saldo);
                    printf("Digite o valor do saque (múltiplo de 10): R$ ");
                    scanf("%d", &valor_saque);

                    if (valor_saque <= 0) {
                        printf("Erro: O valor do saque deve ser maior que zero!\n");
                    } else if (valor_saque % 10 != 0) {
                        printf("Erro: O caixa eletrônico possui apenas notas de R$ 10, 20, 50 e 100. O valor deve ser múltiplo de 10!\n");
                    } else if (valor_saque > saldo) {
                        printf("Erro: Saldo insuficiente para realizar esta operação!\n");
                    } else {
                        saldo -= valor_saque;

                        notas_100 = valor_saque / 100;
                        valor_saque %= 100;

                        notas_50 = valor_saque / 50;
                        valor_saque %= 50;

                        notas_20 = valor_saque / 20;
                        valor_saque %= 20;

                        notas_10 = valor_saque / 10;
                        valor_saque %= 10;

                        printf("\nSaque realizado com sucesso! Cédulas entregues:\n");
                        if (notas_100 > 0) printf("- Notas de R$ 100: %d\n", notas_100);
                        if (notas_50 > 0)  printf("- Notas de R$ 50: %d\n", notas_50);
                        if (notas_20 > 0)  printf("- Notas de R$ 20: %d\n", notas_20);
                        if (notas_10 > 0)  printf("- Notas de R$ 10: %d\n", notas_10);
                        printf("Novo saldo: R$ %.2f\n\n", saldo);
                    }

                    printf("Deseja realizar outro saque? (s/n): ");
                    scanf(" %c", &continuar);
                }
                break;

            case 3:
                continuar = 's';
                while (continuar == 's' || continuar == 'S') {
                    printf("\n--- OPERAÇÃO DE DEPÓSITO ---\n");
                    printf("Digite o valor do depósito: R$ ");
                    scanf("%f", &valor_transacao);

                    if (valor_transacao <= 0) {
                        printf("Erro: O valor do depósito deve ser maior que zero!\n");
                    } else {
                        saldo += valor_transacao;
                        printf("\nDepósito realizado com sucesso!\n");
                        printf("Novo saldo: R$ %.2f\n\n", saldo);
                    }

                    printf("Deseja realizar outro depósito? (s/n): ");
                    scanf(" %c", &continuar);
                }
                break;

            case 4:
                printf("\nSaindo do sistema. Obrigado por utilizar nosso caixa eletrônico!\n");
                return 0;
        }
    }

    return 0;
}