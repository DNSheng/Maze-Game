/*
 * Draw.h
 *
 *  Created on: Apr 23, 2016
 *      Author: Dan
 */

#ifndef DRAW_H_
#define DRAW_H_

#define SIZE 10

extern char map[SIZE][SIZE];
extern int playerX, playerY;
extern char playerSymbol;
extern int goalX, goalY;

void Draw();

#endif /* DRAW_H_ */
