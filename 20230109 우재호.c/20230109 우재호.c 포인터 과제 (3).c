#include <stdio.h>

int main(void)
{
	int i = 10;
	int* p;

	p = &i;
	printf("i의 값: = %d\n", i);

	*p = 20;        // 중요 *를 넣지 않으면 절대 안됌
	printf("i의 값: = %d\n", i);

	return 0;

}