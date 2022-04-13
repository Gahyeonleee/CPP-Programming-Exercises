#include "storegame.h"
#include <windows.h>	
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>


int	nnMove;		// 현재까지 퍼즐 조각을 움직인 횟수
clock_t tStop;   //게임 중단 시간
int tStart = clock();
extern int nMove;
extern void init();

int StoreInfo::display()
{
	return 0;
}

void stop() {
	printf("게임이 중단되며 현재 게임 상태를 저장합니다.\n");
	nnMove = nMove;      //이동횟수 저장
	clock_t	t1 = clock();		// 현재 시각
	tStop = clock();		// 현재시각을 tStop으로 설정
	return init();
}

int stopplay() {          //게임 멈추는 함수
	
	while (_getche != 0) { //게임 종료버튼이 눌리면
		               
		return stop();	 //게임종료
		
	}
	return playEightPuzzle(); //그렇지 않으면 계속 게임 실행	
}


 void display() {   //중단됐을때 화면 기록하는 함수
	system("cls");

	clock_t	t1 = clock();
	double dd = (double)(tStop - tStart) / CLOCKS_PER_SEC;
	printf("\n\t지금까지 이동 횟수:%2d\n\t소요 시간:%6.1f\n\n", nnMove, dd);
}