#include <stdio.h>

//�ǽ� 1-5
//Q7

void sumQ7(int n) {
	int i;
	int sum=0;

	

	for (i = 0; i <= n; i++) {
		sum += i;
		printf("%d+", i);
	}

	printf("= %d\n\n", sum);

}

void sumQ8(int n) {
	int sum = 0;
	int a = 0, b = 0;

	if (n % 2 == 0) 
	{
		sum = (1 + n)*(n / 2);
		printf("(1 + %d) * %d = %d\n", n, n / 2, sum);
	}
	else if(n % 2 ==1)
	{
		a = (n - 1) / 2;
		b = (n + 1) / 2;
		sum = ((1 + n)*a) + b;
		printf("1���� %d������ ���� %d\n", n, sum);

	}
}


int sumof(int a, int b) {
	int sum = 0;

	if (b % 2 == 0)
	{
		sum = (1 + b)*(b / 2);
		printf("(1 + %d) * %d = %d\n", b, b / 2, sum);
	}
	else if (b % 2 == 1)
	{
		sum = ((1 + b)* (b - 1) / 2 ) + (b + 1) / 2;
		printf("1���� %d������ ���� %d\n", b, sum);

	}
}

int main(void)
{
	int n;
	printf("*****�������� 7*****\n");
	puts("1���� n������ ���� ���մϴ�");
	printf("n�� ��: ");
	scanf_s("%d", &n);
	sumQ7(n);

	printf("*****�������� 8*****\n");
	puts("1���� n������ ���� ���콺�� �������� ���մϴ�");
	printf("n�� ��: ");
	scanf_s("%d", &n);
	sumQ8(n);
	
	printf("*****�������� 9*****\n");
	puts("���� a,b�� �Է¹ް� ������ ��� ������ ���� ���ϴ� �Լ� ����");

	system("pause");
	return 0;


	

}

