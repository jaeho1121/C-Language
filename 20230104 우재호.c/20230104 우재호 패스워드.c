#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 1	
#define FAIL 2		
#define LIMIT 3		

int check(int id, int password);

int main() {

	int id, password, result;

	while (1) {
		printf("Id : ");
		scanf_s(" %d", &id);
		printf("Password : ");
		scanf_s(" %d", &password);
		result = check(id, password);
		if (result == SUCCESS) break;
	}
	printf("�α��� ����\n");

	return 0;
}

int check(int id, int password) {

	static int super_id = 0147;
	static int super_password = 1121;
	static int try_count = 0;
	try_count++;

	if (id == super_id && password == super_password) {
		return SUCCESS;
	}
	else {
		if (try_count == LIMIT) {
			printf("Ƚ�� �ʰ�\n");
			exit(1);
		}
		return FAIL;
	}

}