#include <iostream>s

#include "Project.h"


void loadProject()
{
	ShowMainMenu();
}

void About()
{
	std::cout << "Projeto";
}

void TextMainMenu()
{
	std::cout << "1 - Jogo 1 \n";
	std::cout << "2 - Jogo 2 \n";
	std::cout << "0 - Sair \n";
}

void ShowMainMenu()
{
	int op = 1;
	while (op != 0) 
	{
		Luis();
		TextMainMenu();
		std::cin >> op;
		switch (op)
		{
		case 1: std::cout << "Jogo 1";
		default:
			break;
		}
	}
}

void Luis()
{
	std::cout << "\033[38;2;0;255;255m Salve, Luis aqui" << std::endl;
}