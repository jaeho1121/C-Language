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
	int Board1[5][5]; //���� ������
	init_BingoBoard(Board1); //���� 0���� �ʱ�ȭ
	Board_gene(Board1); //���� ���� ä���
	Board_prt(Board1); //���� ���
}

void init_BingoBoard(int a[][length]) { //���� ���� �� 0���� ä���� ���� ����
	for (int i = 0; i < length; i++) for (int j = 0; j < length; j++) a[i][j] = 0;
}
void Board_gene(int a[][length]) { //���� ���� ���ڸ� ��ġ�� �ʴ� 1~25�� ���ڷ� ä��
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
void Board_prt(int a[][length]) { //ä���� ���带 ���
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) printf("%3d", a[i][j]);
		printf("\n");
	}
	printf("\n");
}