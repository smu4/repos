#include <stdio.h>
#include <stdlib.h>

#define RAND_MAX 99

int random () {

	return rand();

}


void main() {
	printf("0���� %d���� \n", RAND_MAX);
	for (int i = 0; i < 5; i++)
		printf("%d \n", rand()%99);
}

//rand() �Լ��� ��¥ �����̴�. ���� srand() �Լ����� ���ڸ� �޾ƾ� �Ѵ�.