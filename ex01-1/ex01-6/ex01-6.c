#include <stdio.h>

//Q6 �ǽ�1-4���� while���� ����� �� ���� i���� n+1�� ���� Ȯ���ϼ��� (���� i���� ����ϵ��� ���α׷� �����ϼ���)
int main(void)
{
	int i, n;
	int sum;
	puts("1���� n������ ���� ���մϴ�");;
	printf("n�� ��: ");
	scanf_s("%d", &n);
	sum = 0;
	i = 1;
	while (i <= n) {
		sum += i;
		i++;
		printf("i����: %d \n", i);
	}
	
	printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);

	
	return 0;


	//Q7


	//Q8
}

