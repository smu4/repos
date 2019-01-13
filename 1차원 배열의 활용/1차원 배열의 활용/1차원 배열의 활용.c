#include <stdio.h>
int main(void) {
	int Arr[5];
	int max, sum, min;
	
	for (int i = 0; i < 5; i++)
		scanf("%d", &Arr[i]);

	max = sum = min = Arr[0];

	for (int k = 0; k < 5; k++) {
		sum += Arr[k];
		
		if (max < Arr[k])
			max = Arr[k];

		if (min > Arr[k])
			min = Arr[k];

		}

	printf("\n%d", max);
	printf("\n%d", min);
	printf("\n%d", sum);

	return 0;

}