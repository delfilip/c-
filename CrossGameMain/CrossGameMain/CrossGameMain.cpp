
#include <iostream>
#include <string>
#include "Field.h"
#include "Player.h"
int main()
{
	Player player1;
	Player player2;
	int iterator=1;
	std::cout << "Welcome in NIM Game!" << std::endl;
	std::cout << "Player1's name:";
	std::cin >> player1.name;
	std::cout << std::endl;
	std::cout << "Player2's name:";
	std::cin >> player2.name;
	Field field;
	field.ShowField();
	while (field.IsGameEnd() != true)
	{
		if (iterator % 2 != 0) { std::cout << player1.name << "'s turn." << std::endl; }
		else std::cout << player2.name << "'s turn." << std::endl;
		field.EraseLines();
		field.IsGameEnd();
		iterator++;
	}

	return 0;

}