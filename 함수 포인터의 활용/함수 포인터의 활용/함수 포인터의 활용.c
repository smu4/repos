#include <stdio.h>

int whosthefirst(int age1, int age2, int(*cmp)(int n1, int n2)) {
	return cmp(age1, age2);
}

int Olderfirst(int age1, int age2) {
	if (age1 > age2)
		return age1;
	else if (age1 < age2)
		return age2;
	else
		return 0;

}

int youngerfirst(int age1, int age2) {
	if (age1 > age2)
		return age2;
	else if (age1 < age2)
		return age1;
	else
		return 0;
}

int main() {
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("������� 1 \n");
	first = whosthefirst(age1, age2, Olderfirst);
	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);

	printf("������� 2 \n");
	first = whosthefirst(age1, age2, youngerfirst);
	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);

	return 0;


}
