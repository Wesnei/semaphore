// OBS: PROGRAMA LIMITADO AO AMBIENTE DO ONLINE GDB, POIS A BIBLIOTCA NCURSES NÃO POSSUI SUPORTE ADEQUADO EM OUTRAS IDES, ALÉM DE SER EXCLUSIVA DE AMBIENTES UNIX

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <curses.h> // BIBLIOTECA PARA MANIPULAR A ENTRADA DE DADOS DE FORMA DINÂMICA
#include <unistd.h> // BIBLIOTECA PARA MANIPULAR O TEMPO

// DEFININDO CORES (COM OFF NO FINAL SIMULA O SEMAFORO DESLIGADO)
#define VERMELHO "\x1B[7;31m"
#define VERMELHO_OFF "\x1B[31m"
#define AMARELO "\x1B[7;33m"
#define AMARELO_OFF "\x1B[33m"
#define VERDE "\x1B[7;32m"
#define VERDE_OFF "\x1B[32m"
#define RESET "\x1B[0m"

// FUNÇÕES DE CADA FASE SIMULANDO O MAPA, PARA PODER MANIPULAR AS ANIMAÇÕES DA BARRA DE TIMER (TIPO VOID JÁ QUE NÃO POSSUI RETORNO)
void fase1()
{
    printf("FASE 1 - (15s) Pressione %sS%s para pedestre\n\n", AMARELO_OFF, RESET); // INICIO DA FASE 1
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERDE%s\t\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERDE, RESET, VERMELHO, RESET, VERMELHO, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO, RESET, AMARELO_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE, RESET, VERDE_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO_OFF, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase2()
{
    printf("FASE 2 - (2s) Pressione %sS%s para pedestre\n\n", AMARELO_OFF, RESET); // INICIO DA FASE 2
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sAMARELO%s\t\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", AMARELO, RESET, VERMELHO, RESET, VERMELHO, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO, RESET, AMARELO_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO, RESET, VERMELHO, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO_OFF, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase3()
{
    printf("FASE 3 - (1s) Pressione %sS%s para pedestre\n\n", AMARELO_OFF, RESET); // INICIO DA FASE 3 CASO BOTÃO NÃO APERTADO
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO, RESET, AMARELO_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase3A()
{
    printf("FASE 3A - (5s)\n\n"); // INICIO DA FASE 3A
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERDE%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERDE, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO, RESET, AMARELO_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase3B1()
{
    printf("FASE 3B - (5s)\n\n"); // INICIO DA FASE 3B
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO, RESET, AMARELO_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase3B2()
{
    printf("FASE 3B - (5s)\n\n");
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO_OFF, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO, RESET, AMARELO_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase4()
{
    printf("FASE 4 - (10s) Pressione %sS%s para pedestre\n\n", AMARELO_OFF, RESET); // INICIO DA FASE 4
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERMELHO%s\t%sVERDE%s\t\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERDE, RESET, VERMELHO, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO_OFF, RESET, AMARELO_OFF, RESET, VERDE, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase5()
{
    printf("FASE 5 - (2s) Pressione %sS%s para pedestre\n\n", AMARELO_OFF, RESET); // INICO DA FASE 5
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERMELHO%s\t%sAMARELO%s\t\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, AMARELO, RESET, VERMELHO, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO_OFF, RESET, AMARELO, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase6()
{
    printf("FASE 6 - (1s) Pressione %sS%s para pedestre\n\n", AMARELO_OFF, RESET); // INICIO DA FASE 6 CASO BOTÃO APERTADO
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO, RESET, AMARELO_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase6A()
{
    printf("FASE 6A - (5s)\n\n"); // INICIO DA FASE 6A
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERDE%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERDE, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO, RESET, AMARELO_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase6B1()
{
    printf("FASE 6B - (5s)\n\n"); // INICIO DA FASE 6B
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO, RESET, AMARELO_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

void fase6B2()
{
    printf("FASE 6B - (5s)\n\n");
    printf("Rua Alfa\tRua Bravo\tPedestre\n");
    printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO_OFF, RESET);

    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t----> \t%sO%s %sO%s %sO%s\t\n\n", VERMELHO, RESET, AMARELO_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", VERDE_OFF, RESET, VERDE_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=\t%sO%s", AMARELO_OFF, RESET, VERMELHO_OFF, RESET);
    printf("\n\t\t\t=\t%sO%s\t=", VERMELHO, RESET);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
    sleep(1);
    system("clear");
}

// FUNÇÃO PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

    initscr();             // INICIALIZAR O MODO CURSES
    cbreak();              // DESATIVAR O BUFFER DE LINHA
    noecho();              // NÃO MOSTRAR ENTRDAS DO TECLADO NA TELA
    nodelay(stdscr, TRUE); // CONFIGURAR ENTRADA NÃO BLOQUEANTE
    keypad(stdscr, TRUE);  // HABILITA CARCTERES ESPECIAIS

    int ch;
    while (1)
    {
        // FASE 1
        printf(VERDE "============================\n\n" RESET);
        fase1();
        printf(VERDE "==========================\n\n" RESET);
        fase1();
        printf(VERDE "========================\n\n" RESET);
        fase1();
        printf(VERDE "======================\n\n" RESET);
        fase1();
        printf(VERDE "====================\n\n" RESET);
        fase1();
        printf(VERDE "==================\n\n" RESET);
        fase1();
        printf(AMARELO "================\n\n" RESET);
        fase1();
        printf(AMARELO "==============\n\n" RESET);
        fase1();
        printf(AMARELO "============\n\n" RESET);
        fase1();
        printf(AMARELO "==========\n\n" RESET);
        fase1();
        printf(AMARELO "========\n\n" RESET);
        fase1();
        printf(VERMELHO "======\n\n" RESET);
        fase1();
        printf(VERMELHO "====\n\n" RESET);
        fase1();
        printf(VERMELHO "==\n\n" RESET);
        fase1();
        printf(VERMELHO "=\n\n" RESET);
        fase1();

        // FASE 2
        printf(VERMELHO "==\n\n" RESET);
        fase2();
        printf(VERMELHO "=\n\n" RESET);
        fase2();

        // FASE 3
        printf(VERMELHO "=\n\n" RESET);
        fase3();

        if ((ch = getch()) == 's' || (ch = getch()) == 'S') // LÓGICA DOS PEDESTRES
        {
            // FASE 3A
            printf(AMARELO "========\n\n" RESET);
            fase3A();
            printf(VERMELHO "======\n\n" RESET);
            fase3A();
            printf(VERMELHO "====\n\n" RESET);
            fase3A();
            printf(VERMELHO "==\n\n" RESET);
            fase3A();
            printf(VERMELHO "=\n\n" RESET);
            fase3A();

            // FASE 3B
            printf(AMARELO "========\n\n" RESET);
            fase3B1();
            printf(VERMELHO "======\n\n" RESET);
            fase3B2();
            printf(VERMELHO "====\n\n" RESET);
            fase3B1();
            printf(VERMELHO "==\n\n" RESET);
            fase3B2();
            printf(VERMELHO "=\n\n" RESET);
            fase3B1();
        }

        // FASE 4
        printf(VERDE "==================\n\n" RESET);
        fase4();
        printf(AMARELO "================\n\n" RESET);
        fase4();
        printf(AMARELO "==============\n\n" RESET);
        fase4();
        printf(AMARELO "============\n\n" RESET);
        fase4();
        printf(AMARELO "==========\n\n" RESET);
        fase4();
        printf(AMARELO "========\n\n" RESET);
        fase4();
        printf(VERMELHO "======\n\n" RESET);
        fase4();
        printf(VERMELHO "====\n\n" RESET);
        fase4();
        printf(VERMELHO "==\n\n" RESET);
        fase4();
        printf(VERMELHO "=\n\n" RESET);
        fase4();

        // FASE 5
        printf(VERMELHO "==\n\n" RESET);
        fase5();
        printf(VERMELHO "=\n\n" RESET);
        fase5();

        // FASE 6
        printf(VERMELHO "=\n\n" RESET);
        fase6();

        if ((ch = getch()) == 's' || (ch = getch()) == 'S') // LÓGICA DOS PEDESTRES
        {
            // FASE 6A
            printf(AMARELO "========\n\n" RESET);
            fase6A();
            printf(VERMELHO "======\n\n" RESET);
            fase6A();
            printf(VERMELHO "====\n\n" RESET);
            fase6A();
            printf(VERMELHO "==\n\n" RESET);
            fase6A();
            printf(VERMELHO "=\n\n" RESET);
            fase6A();

            // FASE 6B
            printf(AMARELO "========\n\n" RESET);
            fase6B1();
            printf(VERMELHO "======\n\n" RESET);
            fase6B2();
            printf(VERMELHO "====\n\n" RESET);
            fase6B1();
            printf(VERMELHO "==\n\n" RESET);
            fase6B2();
            printf(VERMELHO "=\n\n" RESET);
            fase6B1();
        }
    }

    endwin(); // ENCERRAR MODO CURSES
    return 0;
}




