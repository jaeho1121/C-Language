#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float n, k;
	while (1)
	{
		printf("\n����(4.3,  ����:����):");
		scanf("%f", &n);
		if (n < 0) break;
		k = 100 / 4.3 * n;
		printf("����:%.1f --> 100���� ȯ��: %.1f\n", n, k);
	}
	return 0;
}