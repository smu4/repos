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
	printf("����� ����ұ��? : ");
	scanf("%d", &num);

	while (num <= 1) {
			printf("��ȿ�� ���� �Է����ּ���.");
			scanf("%d", &num);
			continue;
		}

	Fibo(num);

	return 0;

}

