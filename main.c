/******************************************************************************

 Crie um programa que simula um jogo de par ou ímpar entre 2 jogadores. 
 Seu programa deve solicitar a opção do primeiro jogador (par ou ímpar), 
 solicitando que ele digite 'P' para par ou 'I' para ímpar. 
 Em seguida, o programa deve solicitar um valor inteiro para cada jogador, referente ao valor que ele vai jogar.
 No final, imprima quem ganhou o jogo.

*******************************************************************************/
#include <stdio.h>


int main() {
    char opcao_jogador1;
    int valor_jogador1, valor_jogador2;
    int soma;

    printf("Jogador 1, escolha par (P) ou ímpar (I): ");
    scanf(" %c", &opcao_jogador1);

    if (opcao_jogador1 != 'P' && opcao_jogador1 != 'p' && opcao_jogador1 != 'I' && opcao_jogador1 != 'i') {
        printf("Opção inválida. Por favor, escolha P para par ou I para ímpar.\n");
        return 1; 
    }

    printf("Jogador 1, digite um valor inteiro: ");
    scanf("%d", &valor_jogador1);
    printf("Jogador 2, digite um valor inteiro: ");
    scanf("%d", &valor_jogador2);

    soma = valor_jogador1 + valor_jogador2;

    if ((soma % 2 == 0 && (opcao_jogador1 == 'P' || opcao_jogador1 == 'p')) ||
        (soma % 2 != 0 && (opcao_jogador1 == 'I' || opcao_jogador1 == 'i'))) {
        printf("Jogador 1 ganhou!\n");
    } else {
        printf("Jogador 2 ganhou!\n");
    }


    return 0; 
}
