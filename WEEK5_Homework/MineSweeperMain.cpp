//지뢰 찾기 게임 메인 함수
#include "MineSweeper.h"
void main()
{
	int total;
	printf("<Mine Sweeper>\n");
	printf("매설할 총 지뢰의 개수 입력 : ");
	scanf_s("%d", &total);
	playMineSweeper(total);
}