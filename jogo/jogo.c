#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // funçao abs converte negativo para positivo

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    while (1) {


        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf_s("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            break;
        }

        else if (maior) {
            printf("Seu chute é maior que o número secreto\n");

        }
        else {
            printf("Seu chute é menor que o número secreto\n");
        }

        tentativas++;

        double pontosperdidos = (abs)(chute - numerosecreto) / (double)2;

        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);

    return 0;

}
/*
O que acontece com o abs?
Com o uso de abs, a diferença chute - numerosecreto será convertida para um valor positivo antes de ser utilizada no cálculo dos pontos perdidos.
Isso evita que a pontuação seja alterada de forma errada caso o resultado dessa diferença seja negativo.

Por exemplo:

Se chute for 50 e o numerosecreto for 42, então chute - numerosecreto = 8. O valor absoluto de 8 é 8.
Se chute for 30 e o numerosecreto for 42, então chute - numerosecreto = -12. O valor absoluto de -12 é 12.
Isso garante que os pontos perdidos sempre aumentem conforme a diferença aumenta, independentemente da ordem dos números.
*/
