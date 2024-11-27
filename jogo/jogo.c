#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");
    printf("               T~~\n");
    printf("               |\n");
    printf("              /\"\\\n");
    printf("      T~~     |'| T~~\n");
    printf("  T~~ |    T~ WWWW|\n");
    printf("  |  /\"\\   |  |  |/\\T~~\n");
    printf(" /\"\\ WWW  /\"\\ |' |WW|\n");
    printf("WWWWW/\\| /   \\|'/\\|/\"\\\n");
    printf("|   /__\\/]WWW[\\/__\\WWWW\n");
    printf("|\"  WWWW'|I_I|'WWWW'  |\n");
    printf("|   |' |/  -  \\|' |'  |\n");
    printf("|'  |  |LI=H=LI|' |   |\n");
    printf("|   |' | |[_]| |  |'  |\n");
    printf("|   |  |_|###|_|  |   |\n");
    printf("'---'--'-/___\\-'--'---'\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;
    int nivel;

    printf("Qual n�vel de dificuldade?\n");
    printf("(1) F�cil (2) M�dio (3) Dif�cil\n\n");
    printf("Escolha: ");
    scanf_s("%d", &nivel);

    int numerotentativas;
    switch (nivel) {
    case 1:
        numerotentativas = 20;
        break;
    case 2:
        numerotentativas = 15;
        break;
    default:
        numerotentativas = 6;
        break;
    }

    for (int i = 1; i <= numerotentativas; i++) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual � o seu chute? ");
        scanf_s("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou) {
            break;
        }
        else if (maior) {
            printf("Seu chute � maior que o n�mero secreto\n\n");
        }
        else {
            printf("Seu chute � menor que o n�mero secreto\n\n");
        }

        tentativas++;
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo\n");
    if (acertou) {
        printf("Voc� ganhou!\n");
        printf("Voc� acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
        printf("      _.-'''''-._\n");
        printf("    .'  _     _  '.\n");
        printf("   /   (_)   (_)   \\\n");    // usamos um caracter especial 2x para mostrar na tela
        printf("  |  ,           ,  |\n");
        printf("  |  \\`.       .`/  |\n");
        printf("   \\  '.`'\"\"'\"`.'  /\n");
        printf("    '.  `'---'`  .'\n");
        printf("      '-._____.-'\n");

    }
    else {
        printf("Voc� perdeu! Tente de novo!\n\n");
        printf("  , ; ,   .-'\"\"\"'-.   , ; ,\n");
        printf("  \\\\|/  .'         '.  \\\\|//\n");
        printf("   \\-;-/   ()   ()   \\-;-/\n");
        printf("   // ;               ; \\\\\n");
        printf("  //__; :.         .; ;__\\\\\n");
        printf(" `-----\\'.'-.....-'.'/-----'\n");
        printf("        '.'.-.-,_.'.'\n");
        printf("          '(  (..-'\n");
        printf("            '-'");
    }

    return 0;
}