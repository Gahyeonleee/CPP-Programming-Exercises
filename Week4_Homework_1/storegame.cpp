#include "storegame.h"
#include <windows.h>	
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>


int	nnMove;		// ������� ���� ������ ������ Ƚ��
clock_t tStop;   //���� �ߴ� �ð�
int tStart = clock();
extern int nMove;
extern void init();

int StoreInfo::display()
{
	return 0;
}

void stop() {
	printf("������ �ߴܵǸ� ���� ���� ���¸� �����մϴ�.\n");
	nnMove = nMove;      //�̵�Ƚ�� ����
	clock_t	t1 = clock();		// ���� �ð�
	tStop = clock();		// ����ð��� tStop���� ����
	return init();
}

int stopplay() {          //���� ���ߴ� �Լ�
	
	while (_getche != 0) { //���� �����ư�� ������
		               
		return stop();	 //��������
		
	}
	return playEightPuzzle(); //�׷��� ������ ��� ���� ����	
}


 void display() {   //�ߴܵ����� ȭ�� ����ϴ� �Լ�
	system("cls");

	clock_t	t1 = clock();
	double dd = (double)(tStop - tStart) / CLOCKS_PER_SEC;
	printf("\n\t���ݱ��� �̵� Ƚ��:%2d\n\t�ҿ� �ð�:%6.1f\n\n", nnMove, dd);
}