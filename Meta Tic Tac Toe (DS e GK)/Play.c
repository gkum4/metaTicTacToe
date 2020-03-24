#include "Header.h"

void play()
{
	setlocale(LC_ALL, "Portuguese");
	Posicao *jogo1 = NULL;
	zera(&jogo1);
	Posicao *jogo2 = NULL;
	zera(&jogo2);
	Posicao *jogo3 = NULL;
	zera(&jogo3);
	Posicao *jogo4 = NULL;
	zera(&jogo4);
	Posicao *jogo5 = NULL;
	zera(&jogo5);
	Posicao *jogo6 = NULL;
	zera(&jogo6);
	Posicao *jogo7 = NULL;
	zera(&jogo7);
	Posicao *jogo8 = NULL;
	zera(&jogo8);
	Posicao *jogo9 = NULL;
	zera(&jogo9);
	Posicao *jogoMETA = NULL;
	zera(&jogoMETA);

	char x1 = '-', x2 = '>';
	char y1 = ' ', y2 = ' ';

	int cont = 0;
	int posijogo = 0; //grupo
	char c = '0', x = '0', g = '0';
	
	criaTabuleiro(jogo1, jogo2, jogo3, jogo4, jogo5, jogo6, jogo7, jogo8, jogo9, jogoMETA, x1, x2, y1, y2, posijogo);

	printf("\t\tPlayer 1,\n\t\tEscolha em qual dos grupos do Meta Tic Tac Toe você deseja começar a partida:\n");
	setbuf(stdin, NULL);
	
	while ((g - '0') < 1 || (g - '0') > 9)
	{
		g = _getch();
		if (g == 'r')
		{
			system("cls");
			play();
		}
		if (g == 's')
		{
			system("cls");
			sair();
		}
		if ((g - '0') < 1 || (g - '0') > 9)
		{
			printf("\n\t\tPosição inválida, por favor digite novamente.\n");
			setbuf(stdin, NULL);
			g = _getch();
		}
	}

	posijogo = (g - '0');

	while (verifica(jogoMETA, A) != 1 && verifica(jogoMETA, B) != 1)
	{
		system("cls");
		if (cont % 2 == 0) //serve para alternância de players
		{
			x1 = '-';
			x2 = '>';
			y1 = ' ';
			y2 = ' ';
		}
		else
		{
			x1 = ' ';
			x2 = ' ';
			y1 = '-';
			y2 = '>';
		}
		criaTabuleiro(jogo1, jogo2, jogo3, jogo4, jogo5, jogo6, jogo7, jogo8, jogo9, jogoMETA, x1, x2, y1, y2, posijogo);
		if (cont % 2 == 0) //serve para alternancia de players
		{
			while(marcavel(posijogo, jogo1, jogo2, jogo3, jogo4, jogo5, jogo6, jogo7, jogo8, jogo9) != 0)
			{
				printf("\n\t\tGrupo cheio. Escolha outro grupo.\n");
				setbuf(stdin, NULL);
				g = _getch();
				posijogo = (g - '0');
			}

			printf("\t\tPlayer 1,\n\t\tEscolha uma posição do grupo %d.\n", posijogo);
			setbuf(stdin, NULL);
			c = '0';
			while ((c - '0') < 1 || (c - '0') > 9)
			{
				c = _getch();
				if (c == 'r')
				{
					system("cls");
					play();
				}
				if (c == 's')
				{
					system("cls");
					sair();
				}
				if ((c - '0') < 1 || (c - '0') > 9)
				{
					printf("\n\t\tPosição inválida, por favor digite novamente.\n");
					setbuf(stdin, NULL);
					c = _getch();
				}
			}
			if (posijogo == 1)
			{
				while (marca(&jogo1, A, (c - '0')) != 0)
				{
					if (marca(&jogo1, A, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo1, A, (c - '0'));
				if (verifica(jogo1, A) == 1 && verifica(jogo1, B) != 1)
				{
					marca(&jogoMETA, A, 1);
				}
			}
			if (posijogo == 2)
			{
				while (marca(&jogo2, A, (c - '0')) != 0)
				{
					if (marca(&jogo2, A, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo2, A, (c - '0'));
				if (verifica(jogo2, A) == 1 && verifica(jogo2, B) != 1)
				{
					marca(&jogoMETA, A, 2);
				}
			}
			if (posijogo == 3)
			{
				while (marca(&jogo3, A, (c - '0')) != 0)
				{
					if (marca(&jogo3, A, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo3, A, (c - '0'));
				if (verifica(jogo3, A) == 1 && verifica(jogo3, B) != 1)
				{
					marca(&jogoMETA, A, 3);
				}
			}
			if (posijogo == 4)
			{
				while (marca(&jogo4, A, (c - '0')) != 0)
				{
					if (marca(&jogo4, A, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo4, A, (c - '0'));
				if (verifica(jogo4, A) == 1 && verifica(jogo4, B) != 1)
				{
					marca(&jogoMETA, A, 4);
				}
			}
			if (posijogo == 5)
			{
				while (marca(&jogo5, A, (c - '0')) != 0)
				{
					if (marca(&jogo5, A, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo5, A, (c - '0'));
				if (verifica(jogo5, A) == 1 && verifica(jogo6, B) != 1)
				{
					marca(&jogoMETA, A, 5);
				}
			}
			if (posijogo == 6)
			{
				while (marca(&jogo6, A, (c - '0')) != 0)
				{
					if (marca(&jogo6, A, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo6, A, (c - '0'));
				if (verifica(jogo6, A) == 1 && verifica(jogo6, B) != 1)
				{
					marca(&jogoMETA, A, 6);
				}
			}
			if (posijogo == 7)
			{
				while (marca(&jogo7, A, (c - '0')) != 0)
				{
					if (marca(&jogo7, A, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo7, A, (c - '0'));
				if (verifica(jogo7, A) == 1 && verifica(jogo7, B) != 1)
				{
					marca(&jogoMETA, A, 7);
				}
			}
			if (posijogo == 8)
			{
				while (marca(&jogo8, A, (c - '0')) != 0)
				{
					if (marca(&jogo8, A, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo8, A, (c - '0'));
				if (verifica(jogo8, A) == 1 && verifica(jogo8, B) != 1)
				{
					marca(&jogoMETA, A, 8);
				}
			}
			if (posijogo == 9)
			{
				while (marca(&jogo9, A, (c - '0')) != 0)
				{
					if (marca(&jogo9, A, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo9, A, (c - '0'));
				if (verifica(jogo9, A) == 1 && verifica(jogo9, B) != 1)
				{
					marca(&jogoMETA, A, 9);
				}
			}
		}
		if (cont % 2 != 0) //serve para altern‚ncia de players
		{
			while (marcavel(posijogo, jogo1, jogo2, jogo3, jogo4, jogo5, jogo6, jogo7, jogo8, jogo9) != 0)
			{
				printf("\n\t\tGrupo cheio. Escolha outro grupo.\n");
				setbuf(stdin, NULL);
				g = _getch();
				posijogo = (g - '0');
			}

			printf("\t\tPlayer 2,\n\t\tEscolha uma posição do grupo %d.\n", posijogo);
			setbuf(stdin, NULL);
			c = '0';
			while ((c - '0') < 1 || (c - '0') > 9)
			{
				c = _getch();
				if (c == 'r')
				{
					system("cls");
					play();
				}
				if (c == 's')
				{
					system("cls");
					sair();
				}
				if ((c - '0') < 1 || (c - '0') > 9)
				{
					printf("\n\t\tPosição inválida, por favor digite novamente.\n");
					setbuf(stdin, NULL);
					c = _getch();
				}
			}
			if (posijogo == 1)
			{
				while (marca(&jogo1, B, (c - '0')) != 0)
				{
					if (marca(&jogo1, B, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo1, B, (c - '0'));
				if (verifica(jogo1, B) == 1 && verifica(jogo1, A) != 1)
				{
					marca(&jogoMETA, B, 1);
				}
			}
			if (posijogo == 2)
			{
				while (marca(&jogo2, B, (c - '0')) != 0)
				{
					if (marca(&jogo2, B, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo2, B, (c - '0'));
				if (verifica(jogo2, B) == 1 && verifica(jogo2, A) != 1)
				{
					marca(&jogoMETA, B, 2);
				}
			}
			if (posijogo == 3)
			{
				while (marca(&jogo3, B, (c - '0')) != 0)
				{
					if (marca(&jogo3, B, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo3, B, (c - '0'));
				if (verifica(jogo3, B) == 1 && verifica(jogo3, A) != 1)
				{
					marca(&jogoMETA, B, 3);
				}
			}
			if (posijogo == 4)
			{
				while (marca(&jogo4, B, (c - '0')) != 0)
				{
					if (marca(&jogo4, B, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo4, B, (c - '0'));
				if (verifica(jogo4, B) == 1 && verifica(jogo4, A) != 1)
				{
					marca(&jogoMETA, B, 4);
				}
			}
			if (posijogo == 5)
			{
				while (marca(&jogo5, B, (c - '0')) != 0)
				{
					if (marca(&jogo5, B, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo5, B, (c - '0'));
				if (verifica(jogo5, B) == 1 && verifica(jogo5, A) != 1)
				{
					marca(&jogoMETA, B, 5);
				}
			}
			if (posijogo == 6)
			{
				while (marca(&jogo6, B, (c - '0')) != 0)
				{
					if (marca(&jogo6, B, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo6, B, (c - '0'));
				if (verifica(jogo6, B) == 1 && verifica(jogo6, A) != 1)
				{
					marca(&jogoMETA, B, 6);
				}
			}
			if (posijogo == 7)
			{
				while (marca(&jogo7, B, (c - '0')) != 0)
				{
					if (marca(&jogo7, B, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo7, B, (c - '0'));
				if (verifica(jogo7, B) == 1 && verifica(jogo7, A) != 1)
				{
					marca(&jogoMETA, B, 7);
				}
			}
			if (posijogo == 8)
			{
				while (marca(&jogo8, B, (c - '0')) != 0)
				{
					if (marca(&jogo8, B, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo8, B, (c - '0'));
				if (verifica(jogo8, B) == 1 && verifica(jogo8, A) != 1)
				{
					marca(&jogoMETA, B, 8);
				}
			}
			if (posijogo == 9)
			{
				while (marca(&jogo9, B, (c - '0')) != 0)
				{
					if (marca(&jogo9, B, (c - '0')) != 0)
					{
						printf("\n\t\tPosição já ocupada, por favor escolha outra posição.\n");
						setbuf(stdin, NULL);
						c = _getch();
					}
					while ((c - '0') < 1 || (c - '0') > 9)
					{
						if ((c - '0') < 1 || (c - '0') > 9)
						{
							printf("\n\t\tPosição inválida, por favor digite novamente.\n");
							setbuf(stdin, NULL);
							c = _getch();
						}
					}
				}
				marca(&jogo9, B, (c - '0'));
				if (verifica(jogo9, B) == 1 && verifica(jogo9, A) != 1)
				{
					marca(&jogoMETA, B, 9);
				}
			}
		}
		posijogo = (c - '0');
		cont++;
	}
	system("cls");

	criaTabuleiro(jogo1, jogo2, jogo3, jogo4, jogo5, jogo6, jogo7, jogo8, jogo9, jogoMETA, x1, x2, y1, y2, posijogo);

	verifica_vencedor(jogoMETA);

	system("pause");

	system("cls");

	fim_de_jogo();
}


