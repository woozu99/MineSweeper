#ifndef _MINESWEEPER_H
#define _MINESWEEPER_H

#define OFFSET_X 10
#define OFFSET_Y 10

#define NORMAL 0
#define MINE 1
#define MINBOARD 3
#define MAXBOARD 16
#define STATUS_OPEN 100
#define STATUS_FLAG 101
#define STATUS_CLOSE 102
#define STATUS_OUTOFRANGE 103

typedef struct Board {
	int statusBlock; 
	int statusMine;
	int cntNearMine;
	int indexBlock;
}Board;

void Play(Board*,int,int);
void MineAllocate(Board*,int,int, int, int);
int OpenBlock(Board*,int,int,int,int);
void FlagBlock(int, int, Board*);
void InitBoard(Board*,int,int);
void DrawBoard(Board*,int,int);
void CntMine(Board*,int,int,int,int);
int IsGameReset();
int IsRetry(char);
int IsNotRetry(char);
int IsVictory(Board*, int, int); 
int checkRows(int);
int checkCols(int);
int checkRowsinGame(int, int);
int checkColsinGame(int, int);
int ActionInRange(int);
void setCurrentCursorPos(int, int);
COORD getCurrentCursorPos(void);
void removeCursor(void);
COORD computeArr(int, int);
COORD computeArrReverse(int, int);

#endif



