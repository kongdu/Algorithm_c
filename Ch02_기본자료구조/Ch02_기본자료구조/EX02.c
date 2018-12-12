#include <stdio.h>
#include <stdlib.h>
//Q1 minof 최소값구하기
/*
int minof(const int a[], int n) { //int a[]대신 int *a를 써도 같다
	int i;
	int min = a[0];
	for (i = 1; i < n; i++) { // i= 1,2,3,4 네번만 검사하면 된다
		if (a[i] < min) min = a[i];
	}return min;
}
int main(void)
{
	int i;
	int *height; //배열 첫번째 요소의 포인터
	int number; //인원 = 배열 height의 요소 개수
	printf("사람 수: ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int)); //요소 개수 number개인 배열 생성
	printf("%d 사람의 키를 입력하세요\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", &height[i]);
	}
	printf("최소값은 %d입니다\n", minof(height, number));
	free(height);

	system("pause");
	return 0;
}*/

//Q2 sumof 합계 구하기
/*
int sumof(const int *a, int n) { //int a[]대신 int *a를 써도 같다
	int i;
	int sum = 0;
	for (i = 0; i < n; i++) { // 4명일때 i= 1,2,3,4 네번만 검사하면 된다
		sum += a[i];
	}
	return sum;
}
int main(void)
{
	int i;
	int *height; //배열 첫번째 요소의 포인터
	int number; //인원 = 배열 height의 요소 개수
	printf("사람 수: ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int)); //요소 개수 number개인 배열 생성
	printf("%d 사람의 키를 입력하세요\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", &height[i]);
	}
	printf("n명의 키의 합은 %d입니다\n", sumof(height, number));
	free(height);

	system("pause");
	return 0;
}*/

//Q3 평균구하기
/*
double aveof(const int a[], int n) { //int a[]대신 int *a를 써도 같다
	int sum = 0;
	for (int i = 0; i < n; i++) { // 4명일때 네번 검사
		sum += a[i];
	}
	double res;
	res = sum / n;
	return res;
}
int main(void)
{
	int i;
	double *height; //배열 첫번째 요소의 포인터
	int number; //인원 = 배열 height의 요소 개수
	printf("사람 수: ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(double)); //요소 개수 number개인 배열 생성
	printf("%d 사람의 키를 입력하세요\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", &height[i]);
	}
	printf("n명의 키의 평균은 %d입니다\n", aveof(height, number));
	free(height);

	system("pause");
	return 0;
}*/

//Q4 실습2-6 키 난수생성후 키의 최대값 구하기 >> 사람수도 난수로
/*
int randommaxof(const int a[], int n) { //요소가 n인 배열 a의 요소의 최댓값 구하기
	int i;
	int max = a[0];
	for (i = 1; i < n; i++) { // i= 1,2,3,4 네번만 검사하면 된다
		if (a[i] > max) max = a[i];
	}return max;

}

int main(void)
{
	int i;
	int *height; //배열 첫번째 요소의 포인터
	int number; //인원 = 배열 height의 요소 개수
	srand(time(NULL));
	number = 5 + rand() % 20;  //*** 사람수 5이상 20이하의난수생성
	printf("사람 수: %d ", number);
	height = calloc(number, sizeof(int)); //요소 개수 number개인 배열 생성
	for (i = 0; i < number; i++) {
		height[i] = 100 + rand() % 90; //100~189의 난수를 생성.대입
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("최댓값은 %d입니다\n", randommaxof(height, number));
	free(height);

	system("pause");
	return 0;
}*/

//Q5 배열요소 역순으로 정렬하는 중간 과정을 일일이 출력하기
/*
이중포문쓸때 제어변수를 꼭 바꿔라!!!!!! 
#define swap(type, x, y) do{type t = x; x=y; y = t;} while(0)


// 1    2	   3	 4	  5	   6	7
//a[0] a[1] a[2] a[3] a[4] a[5] a[6]
//a[0] <-> a[6]
//a[1] <-> a[5]
//a[2] <-> a[4]




void ary_reverse(int a[], int n) {
	int i;
	for (i = 0; i < n / 2; i++)
	{
		printf("a[%2d]랑 a[%2d]를 교환합니다\n", i, n - i - 1);
		swap(int, a[i], a[n - i - 1]);
		for (int j = 0; j < n; j++) {
			printf("%2d ", a[j]);
		}
		printf("\n");
	}

}

int main(void)
{
	int i;
	int *x; //배열 첫번째 요소의 포인터
	int nx; //배열 x의요소 개수

	printf("요소 개수: ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d개의 정수를 입력하세요\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}
	printf("\n**역순 정렬시작**\n");
	//for (i = 0; i < nx; i++) {
	//	printf("%d ", x[i]);
	//}
	printf("\n");
	ary_reverse(x, nx);
	//printf("배열의요소를 역순으로 정렬했습니다\n");
	//for (i = 0; i < nx; i++) {
	//	printf("%d ", x[i]);
	//}
	printf("역순 정렬을 종료합니다\n");
	free(x);

	system("pause");
	return 0;
}*/


//Q6 card_convr함수를 수정해서 배열의 맨 앞쪽에 아랫자리가 아니라 윗자리를 저장하는 card_conv함수를 작성하세요
//배열에 넣을때 거꾸로 넣는데 순차적으로 넣도록 바꾸기
int card_convr(unsigned x, int n, char d[]) {
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPWRSTUVQXYZ";
	int digits = 0; //변환 후 자리수
	if (x == 0) {
		d[digits++] = dchar[0];
	}
	else {
		while (x) {
			d[digits++] = dchar[x%n];
			x /= n;
		}
	}
	return digits;
}

int main(void)
{
	int i;
	unsigned no; //변환하는정수
	int cd;		//기수
	int dno;	//변환 후 자릿수
	char cno[512];
	int retry;
	puts("10진수를 기수 변환합니다");
	do {
		printf("변환할 음이아닌 정수를 입력하시오: ");
		scanf_s("%u", &no);
		do {
			printf("어떤 진수로 변환할까요? (2~36진수) : ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd >36);
		dno = card_convr(no, cd, cno); //no를 cd진수로 변환
		printf("%d진수로 표현하면 ", cd);
		for (i = dno - 1; i >= 0; i--) {
			printf("%c", cno[i]);
		}
			printf("입니다\n");
			printf("한 번 더 할까요? (1 - 예/ 0 - 아니오) : ");
			scanf_s("%d", &retry);
	}while (retry == 1);
	system("pause");
	return 0;
}

//Q10 배열의 모든 요소 뒤집는 셔플shuffle 함수 작성
//void shuffle(int a[], int n);