#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 5

void init_BingoBoard(int a[][length]);
void Board_gene(int a[][length]);
void Board_prt(int a[][length]);

int main()
{
	srand((unsigned)time(NULL));
	int Board1[5][5]; //보드 생성자
	init_BingoBoard(Board1); //보드 0으로 초기화
	Board_gene(Board1); //보드 숫자 채우기
	Board_prt(Board1); //보드 출력
}

void init_BingoBoard(int a[][length]) { //게임 시작 시 0으로 채워진 판을 생성
	for (int i = 0; i < length; i++) for (int j = 0; j < length; j++) a[i][j] = 0;
}
void Board_gene(int a[][length]) { //보드 안의 숫자를 겹치지 않는 1~25의 숫자로 채움
	int count = 0;
	while (count < 25) {
		int x = rand() % 5;
		int y = rand() % 5;
		if (a[x][y] == 0) {
			a[x][y] = count + 1;
			count++;
		}
	}
}
void Board_prt(int a[][length]) { //채워진 보드를 출력
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) printf("%3d", a[i][j]);
		printf("\n");
	}
	printf("\n");
}