#include <stdio.h>
void ptrswap(int **p1, int **p2) {
	int temp = **p1;
	**p1 = **p2;
	**p2 = temp;
}

int main() {
	int num = 10;
	int num2 = 20;

	int *ptr1 = &num;
	int *ptr2 = &num2;

	printf("%d %d", *ptr1, *ptr2);

	printf("\n");

	ptrswap(&ptr1, &ptr2);

	printf("%d %d", *ptr1, *ptr2);
}