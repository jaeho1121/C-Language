#include <stdio.h>
int main(void)
{
	int i = 10;
	int* p;

	p = &i;

	printf("i�� ����:%p", &i); // ���� %p�� �ƴ� %d�� �Ἥ &i�� �ƴ� �׳� i�� ���ٸ� i = 10�̹Ƿ� 10�� ����ϰ� �ȴ�. printf("i�� ����:%d", i);
	printf("�������� ����:%p\n", p);

	return 0;


}