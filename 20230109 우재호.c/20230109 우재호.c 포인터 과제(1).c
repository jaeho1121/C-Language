#include <stdio.h>
int main(void)
{
	int i = 10;  // 0X10는 16으로 출력 되며 이것을 16진수 법 이라고도 한다.
	char c = 69; // 65는 'A'이며 문자를 사용할떄에는 '' 이것을 사용함. 또한 이러한 문자들을 아스키 코드라고 한다.
	double f = 12.3;

	printf("i의 값은:%d\n", i);
	printf("c의 값은:%d\n", c);
	printf("f의 값은:%d\n", f);


	printf("i의 주소:%p\n", &i);
	printf("c의 주소:%p\n", &c);
	printf("f의 주소:%p\n", &f);
	return 0;

}