#include <stdio.h>
int main(void)
{
	int i = 10;  // 0X10�� 16���� ��� �Ǹ� �̰��� 16���� �� �̶�� �Ѵ�.
	char c = 69; // 65�� 'A'�̸� ���ڸ� ����ҋ����� '' �̰��� �����. ���� �̷��� ���ڵ��� �ƽ�Ű �ڵ��� �Ѵ�.
	double f = 12.3;

	printf("i�� ����:%d\n", i);
	printf("c�� ����:%d\n", c);
	printf("f�� ����:%d\n", f);


	printf("i�� �ּ�:%p\n", &i);
	printf("c�� �ּ�:%p\n", &c);
	printf("f�� �ּ�:%p\n", &f);
	return 0;

}