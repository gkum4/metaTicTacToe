#include "Header.h"

// Jogos que existirao:
// jogoMETA
// jogo1 jogo2 jogo3
// jogo4 jogo5 jogo6
// jogo7 jogo8 jogo9


void criaTabuleiro(Posicao *jogo1, Posicao *jogo2, Posicao *jogo3, Posicao *jogo4, Posicao *jogo5, Posicao *jogo6, Posicao *jogo7, Posicao *jogo8, Posicao *jogo9, Posicao *jogoMETA, char x1, char x2, char y1, char y2, int posijogo)
{
	setlocale(LC_ALL, "Portuguese");
	printf("\n\t\t\t-------------------------------------------\n");
	printf("\t\t\t\t  ___META TIC TAC TOE___\n");
	printf("\t\t\t-------------------------------------------\n\n");
	printf("\t\t %c | %c | %c :: %c | %c | %c :: %c | %c | %c ", (jogo1->noroeste)->valor, (jogo1->norte)->valor, (jogo1->nordeste)->valor, (jogo2->noroeste)->valor, (jogo2->norte)->valor, (jogo2->nordeste)->valor, (jogo3->noroeste)->valor, (jogo3->norte)->valor, (jogo3->nordeste)->valor);
	printf("\t %c%c Player 1 : X  \n", x1, x2);
	printf("\t\t-----------::-----------::----------- \n");
	printf("\t\t %c | %c | %c :: %c | %c | %c :: %c | %c | %c ", (jogo1->oeste)->valor, (jogo1)->valor, (jogo1->leste)->valor, (jogo2->oeste)->valor, (jogo2)->valor, (jogo2->leste)->valor, (jogo3->oeste)->valor, (jogo3)->valor, (jogo3->leste)->valor);
	printf("\t %c%c Player 2 : O  \n", y1, y2);
	printf("\t\t-----------::-----------::----------- \n");
	printf("\t\t %c | %c | %c :: %c | %c | %c :: %c | %c | %c \n", (jogo1->sudoeste)->valor, (jogo1->sul)->valor, (jogo1->sudeste)->valor, (jogo2->sudoeste)->valor, (jogo2->sul)->valor, (jogo2->sudeste)->valor, (jogo3->sudoeste)->valor, (jogo3->sul)->valor, (jogo3->sudeste)->valor);
	printf("\t\t:::::::::::::::::::::::::::::::::::::\n ");
	printf("\t\t %c | %c | %c :: %c | %c | %c :: %c | %c | %c \n", (jogo4->noroeste)->valor, (jogo4->norte)->valor, (jogo4->nordeste)->valor, (jogo5->noroeste)->valor, (jogo5->norte)->valor, (jogo5->nordeste)->valor, (jogo6->noroeste)->valor, (jogo6->norte)->valor, (jogo6->nordeste)->valor);
	printf("\t\t-----------::-----------::----------- \n");
	printf("\t\t %c | %c | %c :: %c | %c | %c :: %c | %c | %c \n", (jogo4->oeste)->valor, (jogo4)->valor, (jogo4->leste)->valor, (jogo5->oeste)->valor, (jogo5)->valor, (jogo5->leste)->valor, (jogo6->oeste)->valor, (jogo6)->valor, (jogo6->leste)->valor);
	printf("\t\t-----------::-----------::----------- \n");
	printf("\t\t %c | %c | %c :: %c | %c | %c :: %c | %c | %c\t Grupo / Posi: \t\t Tabuleiro META:\n", (jogo4->sudoeste)->valor, (jogo4->sul)->valor, (jogo4->sudeste)->valor, (jogo5->sudoeste)->valor, (jogo5->sul)->valor, (jogo5->sudeste)->valor, (jogo6->sudoeste)->valor, (jogo6->sul)->valor, (jogo6->sudeste)->valor);
	printf("\t\t::::::::::::::::::::::::::::::::::::: \n");
	printf("\t\t %c | %c | %c :: %c | %c | %c :: %c | %c | %c ", (jogo7->noroeste)->valor, (jogo7->norte)->valor, (jogo7->nordeste)->valor, (jogo8->noroeste)->valor, (jogo8->norte)->valor, (jogo8->nordeste)->valor, (jogo9->noroeste)->valor, (jogo9->norte)->valor, (jogo9->nordeste)->valor);
	printf("\t    1 | 2 | 3  ");
	printf("\t\t\t    %c | %c | %c  \n", (jogoMETA->noroeste)->valor, (jogoMETA->norte)->valor, (jogoMETA->nordeste)->valor);
	printf("\t\t-----------::-----------::-----------\t   ----------- \t\t\t   -----------\n");
	printf("\t\t %c | %c | %c :: %c | %c | %c :: %c | %c | %c ", (jogo7->oeste)->valor, (jogo7)->valor, (jogo7->leste)->valor, (jogo8->oeste)->valor, (jogo8)->valor, (jogo8->leste)->valor, (jogo9->oeste)->valor, (jogo9)->valor, (jogo9->leste)->valor);
	printf("\t    4 | 5 | 6  ");
	printf("\t\t\t    %c | %c | %c  \n", (jogoMETA->oeste)->valor, (jogoMETA)->valor, (jogoMETA->leste)->valor);
	printf("\t\t-----------::-----------::-----------\t   ----------- \t\t\t   -----------\n");
	printf("\t\t %c | %c | %c :: %c | %c | %c :: %c | %c | %c ", (jogo7->sudoeste)->valor, (jogo7->sul)->valor, (jogo7->sudeste)->valor, (jogo8->sudoeste)->valor, (jogo8->sul)->valor, (jogo8->sudeste)->valor, (jogo9->sudoeste)->valor, (jogo9->sul)->valor, (jogo9->sudeste)->valor);
	printf("\t    7 | 8 | 9  ");
	printf("\t\t\t    %c | %c | %c  \n", (jogoMETA->sudoeste)->valor, (jogoMETA->sul)->valor, (jogoMETA->sudeste)->valor);
	printf("\n\t\t\t\t\t\t\t 'r' para restart.\n");
	printf("\t\t\t\t\t\t\t 's' para sair.\n");
}

void intro()
{
	printf("\n\n\n\t\t-------------------------------------------\n");
	printf("\t\t\t  ___META TIC TAC TOE___\n");
	printf("\t\t-------------------------------------------\n");
	printf("\n\n\t\t\t\tLoading");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	system("cls");
}

void menu()
{
	setlocale(LC_ALL, "Portuguese");
	printf("\n\t\t-------------------------------------------\n");
	printf("\t\t\t  ___META TIC TAC TOE___\n");
	printf("\t\t-------------------------------------------\n\n");
	printf("\t\t1 - Jogar! (2 jogadores)\n");
	printf("\t\t2 - Jogar! (sozinho)\n");
	printf("\t\t3 - Como jogar.\n");
	printf("\t\t4 - Sair...\n");
	char c = '0';
	while ((c - '0') < 1 || (c - '0') > 4)
	{
		c = _getch();
		if ((c - '0') == 1)
		{
			system("cls");
			play();
		}
		if ((c - '0') == 2)
		{
			system("cls");
			playalone();
		}
		if ((c - '0') == 3)
		{
			system("cls");
			instrucoes();
		}
		if ((c - '0') == 4)
		{
			char x = '0';
			system("cls");
			printf("\n\n\t\tTem certeza que deseja sair?\n");
			printf("\n\t\t1 - Sim...\n");
			printf("\t\t2 - Não! Voltar ao menu.\n");
			while ((x - '0') != 1 || (x - '0') != 2)
			{
				x = _getch();
				if ((x - '0') == 1)
				{
					exit(1);
				}
				if ((x - '0') == 2)
				{
					system("cls");
					menu();
				}
			}
		}
	}
}

// funcao que zera os valores do jogo
// retorna -1 para jogo ja criado
// retorna 0 para sucesso da operacao
int zera(Posicao **jogo)
{
	if (*jogo != NULL)
	{
		return -1;
	}
	Posicao *new = malloc(sizeof(Posicao));
	new->valor = 32; // valor da posicao centro
	zera_(&new->norte);
	zera_(&new->sul);
	zera_(&new->leste);
	zera_(&new->oeste);
	zera_(&new->nordeste);
	zera_(&new->noroeste);
	zera_(&new->sudeste);
	zera_(&new->sudoeste);
	*jogo = new;
	return 0;
}

// funcao auxiliar da funcao zera
void zera_(Posicao **jogo)
{
	Posicao *new = malloc(sizeof(Posicao));
	new->valor = 32;
	*jogo = new;
}


 // funcao que verifica trincas no jogo
 // retorna 0 para nenhuma trinca feita
 // retorna 1 para uma trinca feita
int verifica(Posicao *jogo, int player)
{
	if (jogo->valor == player) // caso haja alguma marca no centro (para agilizar a funcao)
	{
		if (jogo->valor == player && (jogo->norte)->valor == player && (jogo->sul)->valor == player)
		{
			return 1;
		}
		if (jogo->valor == player && (jogo->oeste)->valor == player && (jogo->leste)->valor == player)
		{
			return 1;
		}
		if (jogo->valor == player && (jogo->nordeste)->valor == player && (jogo->sudoeste)->valor == player)
		{
			return 1;
		}
		if (jogo->valor == player && (jogo->noroeste)->valor == player && (jogo->sudeste)->valor == player)
		{
			return 1;
		}
		if ((jogo->noroeste)->valor == player && (jogo->norte)->valor == player && (jogo->nordeste)->valor == player)
		{
			return 1;
		}
		if ((jogo->noroeste)->valor == player && (jogo->oeste)->valor == player && (jogo->sudoeste)->valor == player)
		{
			return 1;
		}
		if ((jogo->nordeste)->valor == player && (jogo->leste)->valor == player && (jogo->sudeste)->valor == player)
		{
			return 1;
		}
		if ((jogo->sudoeste)->valor == player && (jogo->sul)->valor == player && (jogo->sudeste)->valor == player)
		{
			return 1;
		}
		return 0;
	}
	else
	{
		if ((jogo->noroeste)->valor == player && (jogo->norte)->valor == player && (jogo->nordeste)->valor == player)
		{
			return 1;
		}
		if ((jogo->noroeste)->valor == player && (jogo->oeste)->valor == player && (jogo->sudoeste)->valor == player)
		{
			return 1;
		}
		if ((jogo->nordeste)->valor == player && (jogo->leste)->valor == player && (jogo->sudeste)->valor == player)
		{
			return 1;
		}
		if ((jogo->sudoeste)->valor == player && (jogo->sul)->valor == player && (jogo->sudeste)->valor == player)
		{
			return 1;
		}
		return 0;
	}
}

// marca a jogada de um jogador
// retorna -1 para espaco ja ocupado
// retorna 0 para sucesso na operacao
int marca(Posicao **jogo, int player, int posi)
{
	if (posi == 1 && ((*jogo)->noroeste)->valor == 32)
	{
		((*jogo)->noroeste)->valor = player;
		return 0;
	}
	if (posi == 2 && ((*jogo)->norte)->valor == 32)
	{
		((*jogo)->norte)->valor = player;
		return 0;
	}
	if (posi == 3 && ((*jogo)->nordeste)->valor == 32)
	{
		((*jogo)->nordeste)->valor = player;
		return 0;
	}
	if (posi == 4 && ((*jogo)->oeste)->valor == 32)
	{
		((*jogo)->oeste)->valor = player;
		return 0;
	}
	if (posi == 5 && (*jogo)->valor == 32)
	{
		(*jogo)->valor = player;
		return 0;
	}
	if (posi == 6 && ((*jogo)->leste)->valor == 32)
	{
		((*jogo)->leste)->valor = player;
		return 0;
	}
	if (posi == 7 && ((*jogo)->sudoeste)->valor == 32)
	{
		((*jogo)->sudoeste)->valor = player;
		return 0;
	}
	if (posi == 8 && ((*jogo)->sul)->valor == 32)
	{
		((*jogo)->sul)->valor = player;
		return 0;
	}
	if (posi == 9 && ((*jogo)->sudeste)->valor == 32)
	{
		((*jogo)->sudeste)->valor = player;
		return 0;
	}
	return -1;
}

