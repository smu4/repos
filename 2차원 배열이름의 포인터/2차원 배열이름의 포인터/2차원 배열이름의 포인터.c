#include <stdio.h>
void main() {
	int arr3[4][2] = {
		{1,2}, {3,4}, {5,6}, {7,8}
	};

	int(*ptr)[2] = arr3;
	int i;
	
	for (i = 0; i < 4; i++)
		printf("%d %d \n", ptr, ptr+1);
		ptr += 2;
	return 0;
}