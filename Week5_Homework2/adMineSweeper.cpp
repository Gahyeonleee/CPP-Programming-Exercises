//실습 4-(1),(2),(3) 구현
#include "MineSweeper.h"
void main()
{
	static int MineMapMask[40][80];
	static int MineMapLabel[40][80];

	int width, height, total;
	printf(" <Mine Sweeper>\n");
	printf(" 지뢰맵의 크기 입력(가로 세로) : ");
	scanf_s("%d%d", &width, &height);
	printf(" 매설할 총 지뢰의 개수 입력 : ");
	scanf_s("%d", &total);

	playMineSweeper(width, height, total);
}