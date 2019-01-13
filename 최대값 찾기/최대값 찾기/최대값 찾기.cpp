#include <stdio.h>

void main() {
	int arr[] = { 9,4,1,7,3 };
	int *ptr = arr;
	int max = 1, min = 1;

	for (int i = 0; i < 5; i++)
		if (max < *(ptr + i))
			max = *(ptr + i);

	for (int i = 0; i < 5; i++)
		if (min > *(ptr + i))
			min = *(ptr + i);

	printf("%d %d", max, min);

}