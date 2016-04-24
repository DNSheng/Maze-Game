/*
 * This class creates the menu when the program first launches.
 * Users can choose to play with a default map, create their own map,
 * or exit using a char input.
 *
 */
#include <iostream>
#include <stdlib.h>
#include "Title.h"
#include "Help.h"
#include "MapBuilder.h"

using namespace std;

char input = '\0';

void drawTitle()
{
	system("cls");

	cout << "\t\t\t\t\t\t\t\t Dan Sheng, 2016";
	cout << "\n\n\n\n\n\n\t\t\t\t   MAZE GAME";
	cout << "\n\n\n\n\n\n\n\n\n\n\nCommands:\n\n";
	cout << "m - Map Builder\t        p - Play (Default Map)\t      h - Help\t      q - Quit\n";
	cout << "\n\nENTER:";
	cin >> input;
	cout << endl;

	if(input == 'm')
	{
		//Go to map builder
		mapBuilding();
		/*cout << "Map Builder" << endl;
		system("cls");
		cout << "\n\n\n\n\n\n\t\t\t\tUnder construction" << endl;
		mapBuilder = true;*/
	}
	else if(input =='p')
	{
		//Play game
		cout << "\n\n\n\n\n\n\n\n" << endl;
		gameStart = false;
		playGame = true;
	}
	else if(input == 'q')
	{
		//Don't worry about dealing with gameStart or whatever, just exit
		exit(0);
	}
	else if(input == 'h')
	{
		//Goes to help menu
		helpMenu();
	}
	else
	{
		cout << "Invalid input" << endl;
	}
}
