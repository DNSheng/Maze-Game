/*
 * This allows the game to receive user input, and filters user input.
 * Allowed user input will modify playerX and playerY, while invalid
 * input calls the method again to restart.
 */

#include "Draw.h"
#include "Input.h"

#include <iostream>

void Input()
{
	std::cout << "INPUT: ";
	std::cin >> move;
	std::cout << std::endl;
	if(move == 'w')
	{
		//playerX - 1 to move up map
		if((map[playerX-1][playerY] == 'X') || (map[playerX-1][playerY] == 'G'))
		{
			//Valid, change position
			playerX--;
		}
		else
		{
			//Invalid
			std::cout << "INVALID MOVE" << std::endl;
			Draw();
			Input();
		}
	}
	else if(move == 's')
	{
		if((map[playerX+1][playerY] == 'X') || (map[playerX+1][playerY] == 'G'))
		{
			//Valid
			playerX++;
		}
		else
		{
			//Invalid
			std::cout << "INVALID MOVE" << std::endl;
			Draw();
			Input();
		}
	}
	else if(move == 'a')
	{
		if((map[playerX][playerY-1] == 'X') || (map[playerX][playerY-1] == 'G'))
		{
			//Valid
			playerY--;
		}
		else
		{
			//Invalid
			std::cout << "INVALID MOVE" << std::endl;
			Draw();
			Input();
		}
	}
	else if(move == 'd')
	{
		if((map[playerX][playerY+1] == 'X') || (map[playerX][playerY+1] == 'G'))
		{
			//Valid
			playerY++;
		}
		else
		{
			//Invalid
			std::cout << "INVALID MOVE" << std::endl;
			Draw();
			Input();
		}
	}
	else
	{
		std::cout << "INVALID INPUT" << std::endl;
		Draw();
		Input();
	}
}
