#include <stdio.h>
int main(void) {
	int num1 = 10;
	int num2 = 20;
	int*temp;

	int*pnum1 = &num1;
	int*pnum2 = &num2;

	(*pnum1) += 10;
	(*pnum2) -= 10;

	printf("%d, %d\n", num1, num2);

	temp = pnum1;
	pnum1 = pnum2;
	pnum2 = temp;

	printf("%d, %d", *pnum1, *pnum2);


	return 0;

}---------