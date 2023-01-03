#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int i = 0;
	int A_win, B_win, C_win = 0;
	int dice, money = 0;
	int money[3] = { 1000, 1000, 1000 };
	int A_dice, B_dice, C_dice = 0;
	int A_bet, B_bet, C_bet = 0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)

	{
		dice = 1 + rand() % 6;
		if (A_dice = dice)
		{
			money[0] = A_bet * 2 + money[0];
			printf("win, %d", money[0]);
			A_win++;
		}
		else
		{
			money[0] = money[0] - A_bet;
			printf("lose, %d", money[0]);

		}

		if (B_dice = dice)
		{
			money[1] = B_bet * 2 + money[1];
			printf("win, %d", money[1]);
			B_win++;
		}
		else
		{
			money[1] = money[1] - B_bet;
			printf("lose, %d", money[1]);

		}

		if (C_dice = dice)
		{
			money[2] = C_bet * 2 + money[2];
			printf("win, %d", money[0]);
			A_win++;
		}
		else
		{
			money[2] = money[2] - C_bet;
			printf("lose, %d", money[2]);

		}

	}
	printf("A: % 원, % 회");
	printf("B: % 원, % 회");
	printf("C: % 원, % 회");







}