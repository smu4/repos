#include <stdio.h>
int Fibo(int til) {
	int f1, f2, f3;
	f1 = 0;
	f2 = 1;

	printf("%d %d ", f1, f2);
	for (int num = 0; num < til-2; num++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

int main(void) {
	int num;
	printf("몇까지 출력할까요? : ");
	scanf("%d", &num);

	while (num <= 1) {
			printf("유효한 값을 입력해주세요.");
			scanf("%d", &num);
			continue;
		}

	Fibo(num);

	return 0;

}

