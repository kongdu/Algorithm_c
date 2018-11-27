#include <stdio.h>

//실습 1-5
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
		printf("1부터 %d까지의 합은 %d\n", n, sum);

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
		printf("1부터 %d까지의 합은 %d\n", b, sum);

	}
}

int main(void)
{
	int n;
	printf("*****연습문제 7*****\n");
	puts("1부터 n까지의 합을 구합니다");
	printf("n의 값: ");
	scanf_s("%d", &n);
	sumQ7(n);

	printf("*****연습문제 8*****\n");
	puts("1부터 n까지의 합을 가우스의 덧셈으로 구합니다");
	printf("n의 값: ");
	scanf_s("%d", &n);
	sumQ8(n);
	
	printf("*****연습문제 9*****\n");
	puts("정수 a,b를 입력받고 사이의 모든 정수의 합을 구하는 함수 구현");

	system("pause");
	return 0;


	

}

