#include <iostream>
#include "Field.h"



Field::Field()
{
	lines[0] = 1;
	lines[1] = 3;
	lines[2] = 5;
	lines[3] = 7;
}

Field::~Field()
{
	std::cout << "Field destructed." << std::endl;
}

void Field::ShowField()
{
	
	for (int i = 0; i <= 3; i++)
	{
		std::cout << i;
		for (int j = 0; j < lines[i]; j++)
		{
			std::cout << "|";
		}
		std::cout << std::endl;
	}
}
bool Field::IsGameEnd()
{
	if (lines[0] == 0 && lines[1] == 0 && lines[2] == 0 && lines[3] == 0)
	{
		std::cout << "Game is finished." << std::endl;
		return true;
	}
	else return false;
}
void Field::EraseLines()
{
	std::cout << "How many sticks would you like to cross?" << std::endl;
	std::cin >> choices[0];
	while (choices[0] > 7 || choices[0] < 1)
	{
		std::cout << "Wrong amount of sticks to cross. try again. " << std::endl;
		std::cin >> choices[0];
		
	}
	std::cout << "In which line?" << std::endl;
	std::cin >> choices[1];
	if (lines[choices[1]] < 1)
	{
		std::cout << "This line is currently empty. Choose another one." << std::endl;
		std::cin >> choices[1];
	}
	while (choices[1] > 3 || choices[1] < 0)
	{
		std::cout << "Wrong line. try again." << std::endl;
		std::cin >> choices[1];
	}
	lines[choices[1]] -= choices[0];
	ShowField();
}
