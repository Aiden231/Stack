#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define MAX 10

typedef int element;
element stack[MAX];
int top = -1;

// ���� ���� ���� �Լ�
int is_empty()
{
	return (top == -1);
}

// ��ȭ ���� ���� �Լ�
int is_full()
{
	return (top == (MAX - 1));
}

//���� �Լ�
void push(element item)
{
	if (is_full()) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else stack[top++] = item;
}

//���� �Լ�
element pop()
{
	if (is_empty()) {
		fprintf(stderr, "���� ���� ����\n");
		return;
	}
	else return stack[top--];
}

int main()
{
	srand(time(NULL));

	for (int i = 1; i <= 30; i++)
	{
		int rand_num = 0;

		rand_num = rand() % 100 + 1;

		if (rand_num % 2 == 0) {
			push(rand_num);
			printf("[%d] Push %d\n", i, rand_num);
		}

		else if (rand_num % 2 == 1) {
			element pop();
			printf("[%d] Pop %d\n", i, rand_num);
		}
	}

	system("pause");
	return 0;
}