#include <stdio.h>

//Q6 실습1-4에서 while문이 종료될 때 변수 i값이 n+1이 됨을 확인하세요 (변수 i값을 출력하도록 프로그램 수정하세요)
int main(void)
{
	int i, n;
	int sum;
	puts("1부터 n까지의 합을 구합니다");;
	printf("n의 값: ");
	scanf_s("%d", &n);
	sum = 0;
	i = 1;
	while (i <= n) {
		sum += i;
		i++;
		printf("i값은: %d \n", i);
	}
	
	printf("1부터 %d까지의 합은 %d입니다\n", n, sum);

	
	return 0;


	//Q7


	//Q8
}

