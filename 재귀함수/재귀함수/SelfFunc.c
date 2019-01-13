#include <stdio.h> 
int Factorial (int num) {
	if (num == 0)
		return 1;
	else
		return num * Factorial(num - 1);
	
}

int main(void) {
	int num;
	scanf("%d", &num);
	printf("%d\n", Factorial(num));
	
	return 0;
}