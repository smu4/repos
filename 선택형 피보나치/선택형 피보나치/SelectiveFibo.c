#include <stdio.h>
int Fibo(int cnt) {
	int f1, f2, f3;
	f1 = 0, f2 = 1;

	printf("%d %d ", f1, f2);


	for (int till = 0; till < cnt - 2; till++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;

	}

}

int main(void) {
	int num;
	scanf("%d", &num);
	Fibo(num);
	return 0;
}
