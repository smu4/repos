#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((int)time(NULL)); // ����ð��� �̿��� ���� ����

	for (int i = 0; i < 5; i++)
		printf("���� ��� : %d \n", rand() % 99);

	return 0;
}