#include "Header.h"

void fim_de_jogo() {

	char c = '0';

	printf("\n\n\t\tDeseja jogar uma nova partida?\n");

	printf("\n\t\t1 - Vamos!\n");

	printf("\t\t2 - Infelizmente tenho que sair...\n");

	setbuf(stdin, NULL);


	while ((c - '0') != 1 || (c - '0') != 2)
	{

		c = _getch();

		if ((c - '0') == 1)

		{
			system("cls");
			play();
		}

		if ((c - '0') == 2)
		{

			exit(1);

		}

	}

	system("cls");
}

void instrucoes() {
	printf("\n\t\t\t\t\tINSTRUÇÕES BÁSICAS:\n\n");
	printf("\t\t>>Digite em qual posição do tabuleiro META você quer jogar (1 - 9).\n");
	printf("\t\t>>Digite em qual posição do tabuleiro menor você quer jogar (1 - 9).\n\n");
	printf("\t\t\t\t\t    1 | 2 | 3  \n");
	printf("\t\t\t\t\t    -----------\n");
	printf("\t\t\t\t\t    4 | 5 | 6  \n");
	printf("\t\t\t\t\t    -----------\n");
	printf("\t\t\t\t\t    7 | 8 | 9  \n\n");
	printf("\t\t\t\t\tINSTRUÇÕES DO JOGO:\n\n");
	printf("\t\t>> Player 1, escolha qualquer uma das 81 posições.\n\n");
	printf("\t\t>> A posição do menor tabuleiro que você escolher será a posição no \n");
	printf("\t\t  tabuleiro META destinado ao seu oponente.\n\n");
	printf("\t\t>> Player 2, escolha qualquer posição do tabuleiro destinado a você.\n");
	printf("\t\t  E assim, sucessivamente.\n\n");
	printf("\t\t>> Caso o tabuleiro menor destinado a você esteja cheio, você poderá\n");
	printf("\t\t  escolher qualquer lugar vazio no tabuleiro META para preencher.\n\n");
	printf("\t\t>> O jogo acaba de duas maneira:quando o tabuleiro META esta completamente \n ");
	printf("\t\t preenchido, ocasionando num empate, ou quando um dos jogadores vence no \n");
	printf("\t\t  tabuleiro META.\n\n");

	printf("\t\tDigite qualquer tecla para retornar ao menu.");
	char c = '0';
	c = _getch();
	system("cls");
	menu();
}

void sair()
{
	char x = '0';
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

void verifica_vencedor(Posicao *jogoMETA)
{
	setlocale(LC_ALL, "Portuguese");
	if (verifica(jogoMETA, A) == 1)
		printf("\n\n\t\tParabéns, Player 1, você detonou o seu adversário e ganhou o jogo!\n");

	else if (verifica(jogoMETA, B) == 1)
		printf("\n\n\t\tParabéns, Player 2, você detonou o seu adversário e ganhou o jogo!\n");
}


// retorna 0 se ha lugar no grupo
// retorna -1 se nao ha lugar no grupo
int marcavel(int posijogo, Posicao *jogo1, Posicao *jogo2, Posicao *jogo3, Posicao *jogo4, Posicao *jogo5, Posicao *jogo6, Posicao *jogo7, Posicao *jogo8, Posicao *jogo9)
{
	if (posijogo == 1)
	{
		if (((jogo1)->noroeste)->valor == 32 || ((jogo1)->norte)->valor == 32 || ((jogo1)->nordeste)->valor == 32 || ((jogo1)->oeste)->valor == 32 || jogo1->valor == 32 || ((jogo1)->leste)->valor == 32 || ((jogo1)->sudoeste)->valor == 32 || ((jogo1)->sul)->valor == 32 || ((jogo1)->sudeste)->valor == 32)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	if (posijogo == 2)
	{
		if (((jogo2)->noroeste)->valor == 32 || ((jogo2)->norte)->valor == 32 || ((jogo2)->nordeste)->valor == 32 || ((jogo2)->oeste)->valor == 32 || jogo2->valor == 32 || ((jogo2)->leste)->valor == 32 || ((jogo2)->sudoeste)->valor == 32 || ((jogo2)->sul)->valor == 32 || ((jogo2)->sudeste)->valor == 32)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	if (posijogo == 3)
	{
		if (((jogo3)->noroeste)->valor == 32 || ((jogo3)->norte)->valor == 32 || ((jogo3)->nordeste)->valor == 32 || ((jogo3)->oeste)->valor == 32 || jogo3->valor == 32 || ((jogo3)->leste)->valor == 32 || ((jogo3)->sudoeste)->valor == 32 || ((jogo3)->sul)->valor == 32 || ((jogo3)->sudeste)->valor == 32)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	if (posijogo == 4)
	{
		if (((jogo4)->noroeste)->valor == 32 || ((jogo4)->norte)->valor == 32 || ((jogo4)->nordeste)->valor == 32 || ((jogo4)->oeste)->valor == 32 || jogo4->valor == 32 || ((jogo4)->leste)->valor == 32 || ((jogo4)->sudoeste)->valor == 32 || ((jogo4)->sul)->valor == 32 || ((jogo4)->sudeste)->valor == 32)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	if (posijogo == 5)
	{
		if (((jogo5)->noroeste)->valor == 32 || ((jogo5)->norte)->valor == 32 || ((jogo5)->nordeste)->valor == 32 || ((jogo5)->oeste)->valor == 32 || jogo5->valor == 32 || ((jogo5)->leste)->valor == 32 || ((jogo5)->sudoeste)->valor == 32 || ((jogo5)->sul)->valor == 32 || ((jogo5)->sudeste)->valor == 32)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	if (posijogo == 6)
	{
		if (((jogo6)->noroeste)->valor == 32 || ((jogo6)->norte)->valor == 32 || ((jogo6)->nordeste)->valor == 32 || ((jogo6)->oeste)->valor == 32 || jogo6->valor == 32 || ((jogo6)->leste)->valor == 32 || ((jogo6)->sudoeste)->valor == 32 || ((jogo6)->sul)->valor == 32 || ((jogo6)->sudeste)->valor == 32)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	if (posijogo == 7)
	{
		if (((jogo7)->noroeste)->valor == 32 || ((jogo7)->norte)->valor == 32 || ((jogo7)->nordeste)->valor == 32 || ((jogo7)->oeste)->valor == 32 || jogo7->valor == 32 || ((jogo7)->leste)->valor == 32 || ((jogo7)->sudoeste)->valor == 32 || ((jogo7)->sul)->valor == 32 || ((jogo7)->sudeste)->valor == 32)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	if (posijogo == 8)
	{
		if (((jogo8)->noroeste)->valor == 32 || ((jogo8)->norte)->valor == 32 || ((jogo8)->nordeste)->valor == 32 || ((jogo8)->oeste)->valor == 32 || jogo8->valor == 32 || ((jogo8)->leste)->valor == 32 || ((jogo8)->sudoeste)->valor == 32 || ((jogo8)->sul)->valor == 32 || ((jogo8)->sudeste)->valor == 32)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	if (posijogo == 9)
	{
		if (((jogo9)->noroeste)->valor == 32 || ((jogo9)->norte)->valor == 32 || ((jogo9)->nordeste)->valor == 32 || ((jogo9)->oeste)->valor == 32 || jogo9->valor == 32 || ((jogo9)->leste)->valor == 32 || ((jogo9)->sudoeste)->valor == 32 || ((jogo9)->sul)->valor == 32 || ((jogo9)->sudeste)->valor == 32)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	return -1;
}

char aleatorio()
{
	int x = 0;
	while (x == 0)
	{
		x = rand() % 10;
	}
	if (x == 1)
	{
		return '1';
	}
	if (x == 2)
	{
		return '2';
	}
	if (x == 3)
	{
		return '3';
	}
	if (x == 4)
	{
		return '4';
	}
	if (x == 5)
	{
		return '5';
	}
	if (x == 6)
	{
		return '6';
	}
	if (x == 7)
	{
		return '7';
	}
	if (x == 8)
	{
		return '8';
	}
	if (x == 9)
	{
		return '9';
	}
	return '0';
}