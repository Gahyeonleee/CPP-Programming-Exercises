//�ǽ� 4-(1),(2),(3) ����
#include "MineSweeper.h"
void main()
{
	static int MineMapMask[40][80];
	static int MineMapLabel[40][80];

	int width, height, total;
	printf(" <Mine Sweeper>\n");
	printf(" ���ڸ��� ũ�� �Է�(���� ����) : ");
	scanf_s("%d%d", &width, &height);
	printf(" �ż��� �� ������ ���� �Է� : ");
	scanf_s("%d", &total);

	playMineSweeper(width, height, total);
}