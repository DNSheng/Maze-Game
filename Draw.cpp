/*
 * This file contains a default map, but also draws a map and the user.
 * This will need modifications when the map builder is to be done.
 *
 */
#include <iostream>
#include <stdlib.h>
#include "Draw.h"

using namespace std;

int goalX = 1, goalY = 8;
int playerX = 8, playerY = 1;
char playerSymbol = '@';

char map[10][10] = {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
					'|', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'G', '|',
					'|', 'X', '|', 'X', '-', 'X', 'X', '-', '-', '|',
					'|', 'X', '|', 'X', '|', 'X', 'X', '|', 'X', '|',
					'|', '-', '-', 'X', 'X', 'X', 'X', 'X', 'X', '|',
					'|', 'X', 'X', 'X', '|', '-', 'X', '|', 'X', '|',
					'|', 'X', '|', 'X', '|', 'X', 'X', '|', 'X', '|',
					'|', 'X', '|', 'X', '-', '-', 'X', '-', '-', '|',
					'|', 'X', '|', 'X', 'X', 'X', 'X', 'X', 'X', '|',
					'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
int i, j;

void Draw()
{
	system("cls");
	cout << "\n\n@ - Player\tX - Paths\tG - Goal\n\n\n\n\n";
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if((playerX == i) && (playerY == j))
			{
				cout << playerSymbol << "   ";
			}
			else
			{
				cout << map[i][j] << "   ";
			}
		}
		cout << endl;
	}
	cout << "\n\n\n" << endl;
}
