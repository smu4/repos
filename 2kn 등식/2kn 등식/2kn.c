#include <stdio.h> 
int main(void) {
	int n;
	int k=1;
	
	scanf("%d", &n);
	
	while (square(k) < n) {
		k++;
	}
	
	printf("%d, %d", square(k-1), k-1);
	
}




int square(int k) {
	if (k == 0)
		return 1;
	else
		return 2 * square(k - 1);
}