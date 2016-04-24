/*
 * This checks for win condition, and afterwards has a restart prompt
 * which asks if they want to restart.
 *
 * 	Entering 'Y' will turn gameOver back to false, and due to how the
 * 	main is programmed, loopes back to restart the game.
 *
 * 	Entering 'N' will set gameStart to true and causes the main to
 * 	restart and go back to the beginning (ie the main menu)
 */
#include <iostream>
#include "Logic.h"
#include "Draw.h"
#include "Title.h"

using namespace std;

char restartInput;

void Logic()
{
	if((playerX == goalX) && (playerY == goalY))
	{
		gameOver = true;
		cout << "Congratulations! You won!\nRestart? (Y/N)" << endl;
		cin >> restartInput;
		if(restartInput == 'Y')
		{
			playerX = 8;
			playerY = 1;
			gameOver = false;
		}
		else if(restartInput == 'N')
		{
			playerX = 8;
			playerY = 1;
			gameOver = false;
			gameStart = true;
		}
		else
		{
			Logic();
		}
	}
}
