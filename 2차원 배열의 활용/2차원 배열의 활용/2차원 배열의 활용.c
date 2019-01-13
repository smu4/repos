#include <stdio.h>
void main() {
	int gugu[3][9];

	int i;
	int j;

	for (i=0; i<3; i++) {
		for (j = 0; j < 9; j++) 
			gugu[i][j] = (i+2) * (j + 1);
	}
		
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++)
			printf("%d ", gugu[i][j]);
		printf("\n");
	}
	

}