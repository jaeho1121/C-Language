#include <stdio.h>

int main(void)
{
	int i = 10;
	int* p;

	p = &i;
	printf("i�� ��: = %d\n", i);

	*p = 20;        // �߿� *�� ���� ������ ���� �ȉ�
	printf("i�� ��: = %d\n", i);

	return 0;

}