#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main() {

	int i, num, sco[20], max, min, a = 0, b = 0;
	double add = 0;
	printf("�л��� �Է� : ");
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
	printf("\n��������(%d�� �л�) : %d\n", b + 1, min);
	printf("�ְ�����(%d�� �л�) : %d\n", a + 1, max);
	printf("��� : %f\n", add / num);
}