/*
 * This initially starts with the main menu. A prompt to play will
 * loop between Draw(), Input(), and Logic(), but if the game ends
 * but the player will restart, the program will go to the if-statement
 * in the while loop, restarting the loop to the initial state (with
 * help from Logic()).
 */
#include <iostream>
#include <stdlib.h>
#include "Draw.h"
#include "Title.h"
#include "Input.h"
#include "Logic.h"
#include "MapBuilder.h"

using namespace std;

bool gameStart = true;
bool playGame = false;
bool mapBuilder = false;
bool gameOver = false;

//Draw()
	// Draws the map, since we are changing the array, map will
	// be updated each time.
//Input()
	// Gets input, doesn't check
//Logic()
	// Checks input
		// Valid input goes on to win condition check
		// Invalid input goes back to Input()

int main()
{
	while(gameStart)
	{
		drawTitle();
	}
	if(playGame)
	{
		while(!gameOver)
		{
			playGame = false;
			Draw();
			Input();
			Logic();
			if(gameStart == true)
			{
				//For restarts
				main();
			}
		}
	}
	return 0;
}

