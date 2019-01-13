#include <stdio.h>
void swap(int*a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	return 0;
}

int main() {
	int num1 = 3;
	int num2 = 5;

	swap(&num1, &num2);

	printf("%d %d", num1, num2);
}