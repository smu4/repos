#include <stdio.h>
void main() {
	int arr[10], dig;
	int *bptr = &arr[9];
	int *fptr = &arr[0];
	
	for (int i = 0; i < 10; i++) {
		scanf("%d", &dig);
		if (dig % 2 == 0) {
			*bptr = dig;
			bptr--;
		}
		else {
			*fptr = dig;
			fptr++;
		}
			
			
		
	}
	
	for (int i = 0; i < 10; i++)
		printf("%d", arr[i]);

	
}