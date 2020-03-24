#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	system("COLOR F2");
	intro();
	menu();
	play();
	system("pause");
    return 0;
}