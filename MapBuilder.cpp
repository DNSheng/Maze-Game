/*
 * Unfinished
 *
 * Should start with getting user input of size, allocating
 * a matrix of that size, and getting char input one by one
 * to fill it in. When finished, going back to the menu then
 * playing will maybe go to a menu wherein a map is chosen
 * (either the default or custom). Now, a choice must be made.
 *
 * Either only one custom map is stored (easier).
 *
 * Or multiple maps are stored (harder).
 *
 * Multiple menus probably necessitate a class or structure
 * that will hold all the shit, located in MapBuilder and
 * before playing.
 * Deleting must be a thing aswell.
 * Thankfully, there must be a limit.
 * How about making X amount of maps and with each creation,
 * "realloc"-ing the declared maps.
 *
 * Naming would be nice but complicated.
 */
#include <iostream>
#include <stdlib.h>
#include "MapBuilder.h"
#include "Title.h"

using namespace std;

bool inMapBuilder;
char mapBuilderGeneralInput;

void mapBuilding()
{
	inMapBuilder = true;
	system("cls");
	while(inMapBuilder)
	{
		cout << "Map Builder:" << endl;
		cout << "\n\n\n\n\n\n\n\nUnder construction\n\n\n\n\n\n\n\n" << endl;
		cout << "Enter b to go back" << endl;
		cin >> mapBuilderGeneralInput;
		if(mapBuilderGeneralInput == 'b')
		{
			inMapBuilder = false;
		}
		else
		{
			mapBuilding();
		}
	}
	drawTitle();
}
