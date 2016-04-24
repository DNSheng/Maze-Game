/*
 *This is the help menu, displaying the rules and controls.
 *The user entering 'b' will go back to the title/main menu
 */
#include <iostream>
#include <stdlib.h>
#include "Help.h"
#include "Title.h"

using namespace std;

bool inHelpMenu;
char goBack;

void helpMenu()
{
	inHelpMenu = true;
	system("cls");
	while(inHelpMenu)
	{
		cout << "Help:\n\n\n\n\n\n\n" << endl;
		cout << "Rules:" << endl;
		cout << "\t- Travel along the path of X's to get to the G (goal)" << endl;
		cout << "\t- Walls such as '-' or '|' cannot be crossed\n" << endl;
		cout << "Controls:" << endl;
		cout << "Type w, a, s, d and press ENTER to navigate when playing." << endl;
		cout << "\n\n\n\n\n\n\n\nEnter b to go back" << endl;
		cin >> goBack;
		if(goBack == 'b')
		{
			inHelpMenu = false;
		}
		else
		{
			helpMenu();
		}
	}
	drawTitle();
}
