#include<stdio.h>

#include<stdlib.h>

#include<time.h>

int main(void) {

	char a, num;

	printf("$ a.out\n\n가위(s) 바위(r) 보(p) 게임을 시작합니다.(게임종료 : 9)\n");

	for (;;) {

		do {

			srand(time(NULL));

			num = rand() % 4 + 112;

		} while (num == 'q');

		printf("\n가위 바위 보를 선택하세요 : ");

		a = getchar();

		getchar();

		if (a == 57) {

			printf("다음에 또 만나요.\n\n$");

			break;

		}

		else if (a == 'r' && num == 'r')

			printf("당신은 바위를 냈고 컴퓨터는 바위를 냈습니다.\n당신은 비겼습니다.\n");

		else if (a == 'r' && num == 'p')

			printf("당신은 바위를 냈고 컴퓨터는 보를 냈습니다.\n당신은 졌습니다.\n");

		else if (a == 'r' && num == 's')

			printf("당신은 바위를 냈고 컴퓨터는 가위를 냈습니다.\n당신은 이겼습니다.\n");

		else if (a == 's' && num == 'r')

			printf("당신은 가위를 냈고 컴퓨터는 바위를 냈습니다.\n당신은 졌습니다.\n");

		else if (a == 's' && num == 'p')

			printf("당신은 가위를 냈고 컴퓨터는 보를 냈습니다.\n당신은 이겼습니다.\n");

		else if (a == 's' && num == 's')

			printf("당신은 가위를 냈고 컴퓨터는 가위를 냈습니다.\n당신은 비겼습니다.\n");

		else if (a == 'p' && num == 'r')

			printf("당신은 보를 냈고 컴퓨터는 바위를 냈습니다.\n당신은 이겼습니다.\n");

		else if (a == 'p' && num == 'p')

			printf("당신은 보를 냈고 컴퓨터는 보를 냈습니다.\n당신은 비겼습니다.\n");

		else if (a == 'p' && num == 's')

			printf("당신은 보를 냈고 컴퓨터는 가위를 냈습니다.\n당신은 졌습니다.\n");

		else {

			printf("다시 입력해주세요.\n");

			continue;

		}

	}

	return 0;

}
