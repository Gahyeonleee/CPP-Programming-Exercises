//3x3 ∆€¡Ò ∞‘¿”[Main.cpp]
#include "Ranking.h"
extern int playFifteenPuzzle();
extern int playreplayPuzzle();

int main()
{
	loadRanking("ranking.txt");
	int rank = playFifteenPuzzle();
	int rank1 = playreplayPuzzle();
	printRanking();
	storeRanking("ranking.txt");
}