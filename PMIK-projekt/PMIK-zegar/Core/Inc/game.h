 /* game.h

   Created on May 13, 2023
       Author kajet

*/
#include "main.h"
#ifndef INC_GAME_H_
#define INC_GAME_H_

typedef struct
{
	char gameState[10];	// current state of the game ( Setting/Playing/Paused )
	int currPlayer;		// 0 or 1
	int currTimes[2];	// players remaining times
	int startTime;		// from chosen preset
	int increment;		// from chosen preset

	// above times expressed as multiples of 250ms ( timer interrupt period ),
	// eg. startTime = 240 => 60 sec = 1 min

	int presetIndex;
	int presets[12][2];	// contains 12 preset options, stored as {[min],[s]}

}Game;

extern char printString[20];
extern Game game;
extern UART_HandleTypeDef huart1;	//CHANGE

void changeGameState(char* state);

int compareGameState(char* state);

void choosePreset();

void startGame();

void pauseGame();

void resumeGame();

void endGame();

void updateTime();

void changePlayer(int selectedPlayer);

void changePrintStringPreset();

void changePrintStringGame();

void sendTime();

#endif  INC_GAME_H_
