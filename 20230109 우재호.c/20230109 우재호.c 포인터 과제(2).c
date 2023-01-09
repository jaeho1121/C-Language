#include <stdio.h>
int main(void)
{
	int i = 10;
	int* p;

	p = &i;

	printf("i의 값은:%p", &i); // 만약 %p가 아닌 %d를 써서 &i가 아닌 그냥 i를 쓴다면 i = 10이므로 10을 출력하게 된다. printf("i의 값은:%d", i);
	printf("포인터의 값은:%p\n", p);

	return 0;


}