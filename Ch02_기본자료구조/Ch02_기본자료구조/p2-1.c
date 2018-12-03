#include <stdio.h>

#define N 5
int main(void) {
	int i;
	int a[N];//배열 a의 자료형은 int[5]
	for (int i = 0; i < N; i++)
	{
		printf("a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
	puts("각 요소의 값");
	for (i = 0; i < N; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	system("pause");
	return 0;
}