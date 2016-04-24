/*
 * This allows the game to receive user input, and filters user input.
 * Allowed user input will modify playerX and playerY, while invalid
 * input calls the method again to restart.
 */
#include <iostream>
#include "Draw.h"

using namespace std;

char move = '\0';	//INPUT

void Input()
{
	cout << "INPUT: ";
	cin >> move;
	cout << endl;
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
			cout << "INVALID MOVE" << endl;
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
			cout << "INVALID MOVE" << endl;
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
			cout << "INVALID MOVE" << endl;
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
			cout << "INVALID MOVE" << endl;
			Draw();
			Input();
		}
	}
	else
	{
		cout << "INVALID INPUT" << endl;
		Draw();
		Input();
	}
}
