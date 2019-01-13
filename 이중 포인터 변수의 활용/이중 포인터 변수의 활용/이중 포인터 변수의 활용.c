#include <stdio.h>

int MaxAndMin(int **ppp) {
	int *max = *ppp[0];
	int *min = *ppp[0];

	for (int i = 0; i < 5; i++)
		if ((**ppp) < (**ppp + i))
			max = (**ppp + i);

	for (int i = 0; i < 5; i++)
		if ((**ppp) > (**ppp + i))
			min = (**ppp + i);

	return min;
}


int main() {
	
	int max;
	int min;

	int num1 = 8, num2 = 6, num3 = 7, num4 = 2, num5 = 5;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *ptr3 = &num3;
	int *ptr4 = &num4;
	int *ptr5 = &num5;

	int *prr[] = {ptr1, ptr2, ptr3, ptr4, ptr5};



	

	printf("%d", MaxAndMin(&prr));

}