#ifndef Header_h
#define Header_h

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

#define A 88 //player 1
#define B 79 //player 2

typedef struct Posicao
{
    int valor; // 32 = vazio (espaco); 88 = "X" player 1; 79 = "O" player 2
    struct Posicao *norte;
    struct Posicao *sul;
    struct Posicao *leste;
    struct Posicao *oeste;
    struct Posicao *nordeste;
    struct Posicao *noroeste;
    struct Posicao *sudeste;
    struct Posicao *sudoeste;
} Posicao;

void zeroTabuleiro();

void criaTabuleiro(Posicao *jogo1, Posicao *jogo2, Posicao *jogo3, Posicao *jogo4, Posicao *jogo5, Posicao *jogo6, Posicao *jogo7, Posicao *jogo8, Posicao *jogo9, Posicao *jogoMETA, char x1, char x2, char y1, char y2, int posijogo);

void intro();

void menu();

int coloca(Posicao *jogo, int player, int posijogo, int lugar);

int marcavel(int jogoposi, Posicao *jogo1, Posicao *jogo2, Posicao *jogo3, Posicao *jogo4, Posicao *jogo5, Posicao *jogo6, Posicao *jogo7, Posicao *jogo8, Posicao *jogo9);

void instrucoes();

void fim_de_jogo();

int zera(Posicao **jogo);

void zera_(Posicao **jogo);

int verifica(Posicao *jogo, int player);

int marca(Posicao **jogo, int player, int posi);

void marca_(Posicao **jogo, int player);

void play();

void verifica_vencedor(Posicao *jogoMETA);

void sair();

void playalone();

char aleatorio();


#endif
