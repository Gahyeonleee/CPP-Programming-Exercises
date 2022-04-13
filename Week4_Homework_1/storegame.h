//현재 게임 상태 파일에 저장하기 위한 헤더파일
#include <cstdio>
#include <time.h>

struct StoreInfo {
	int	nnMove;		// 현재까지 퍼즐 조각을 움직인 횟수
	int display();  //게임 실행 시각정보
	 clock_t tStop;   //게임 중단 시간
	
};
extern int playEightPuzzle();

