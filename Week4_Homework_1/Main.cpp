//3x3 ∆€¡Ò ∞‘¿”[Main.cpp]
#include "Ranking.h"
extern int playEightPuzzle();
extern int playreplayPuzzle();

int main()
{
	loadRanking("ranking.txt");
	int rank = playEightPuzzle();
	int rank1 = playreplayPuzzle();
	printRanking();
	storeRanking("ranking.txt");
}