#include <stdio.h>

#define N 5
int main(void) {
	int i;
	int a[N];//�迭 a�� �ڷ����� int[5]
	for (int i = 0; i < N; i++)
	{
		printf("a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
	puts("�� ����� ��");
	for (i = 0; i < N; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	system("pause");
	return 0;
}