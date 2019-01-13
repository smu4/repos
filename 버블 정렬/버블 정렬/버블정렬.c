#include <stdio.h>
#define SIZE 7

void main() {
	int arr[SIZE];
	int temp;

	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);
	}

	for (int c = SIZE-1; c > 0; c--) {
		int *f = &arr[0];
		int *b = &arr[1];

		for (int i = 0; i < c; i++) {
			if (*f >= *b) {
				temp = *f;
				*f = *b;
				*b = temp;
			}
			f++;
			b++;
		}
	}

	for (int i = 0; i < SIZE; i++)
		printf("%d", arr[i]);
}