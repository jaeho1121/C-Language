#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {

	int i, num, sco[20], max, min, a = 0, b = 0;
	double add = 0;
	printf("학생수 입력 : ");
	scanf("%d", &num);
	for (int i = 0; i < 20; i++)
	{
		sco[i] = rand() % 10;
		printf("%d ", sco[i]);
	}
	max = sco[0];
	min = sco[0];
	for (i = 0; i < num; i++) {
		if (max < sco[i]) {
			max = sco[i];
			a = i;
		}
		if (min > sco[i]) {
			min = sco[i];
			b = i;
		}
		add += sco[i];
	}
	printf("\n최저점수(%d번 학생) : %d\n", b + 1, min);
	printf("최고점수(%d번 학생) : %d\n", a + 1, max);
	printf("평균 : %f\n", add / num);
}


//int score[num]; 4줄의 코딩 이용하기

//for(i=0; i<num; i++) {

//for(j=0; j<= score[i]/10; j++)

//printf(“*”);
