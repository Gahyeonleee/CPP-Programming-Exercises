//5x5 ∆€¡Ò ∞‘¿”[Main.cpp]
#include "Ranking.h"
extern int playTwentyFourPuzzle();
extern int playreplayPuzzle();

int main()
{
	loadRanking("ranking.txt");
	int rank = playTwentyFourPuzzle();
	int rank1 = playreplayPuzzle();
	printRanking();
	storeRanking("ranking.txt");
}