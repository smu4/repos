#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((int)time(NULL));

	int comp, user;
	int draw = 0, win = 0, result = 0;
	
	printf("���� = 0, ���� = 1, �� = 2 \n");


	while (result != 1) {
		comp = rand() % 2;
		scanf("%d", &user);

		if (user == comp) {
			printf("���º�\n\n");
			draw += 1;
		}

		else if ((user == 0 && comp == 2) || (user == 1 && comp == 0) || (user == 2 && comp == 1)) {
			printf("�̰���ϴ�.\n\n");
			win += 1;
		}

		else
			result += 1;
	}

	printf("�����ϼ̽��ϴ�. \n���� : %d�� %d��", win, draw);

}