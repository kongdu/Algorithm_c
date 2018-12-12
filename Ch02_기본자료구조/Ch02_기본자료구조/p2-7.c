//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
///*배열 요소를 역순으로 정렬하기*/
//
//#define swap(type, x, y) do{type t = x; x=y; y = t;} while(0)
//
///*
// 1    2	   3	 4	  5	   6	7
//a[0] a[1] a[2] a[3] a[4] a[5] a[6]
//a[0] <-> a[6]
//a[1] <-> a[5]
//a[2] <-> a[4]
//*/
//
//void arr_reverse(int a[], int n) {
//	int i;
//	for (i = 0; i < n / 2; i++)
//	{
//		swap(int, a[i], a[n - i - 1]);
//	}
//}
//
//
//int main(void)
//{
//	int i;
//	int *x; //배열 첫번째 요소의 포인터
//	int nx; //배열 x의요소 개수
//
//	printf("요소 개수: ");
//	scanf_s("%d", &nx);
//	x = calloc(nx, sizeof(int));
//	printf("%d개의 정수를 입력하세요\n", nx);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf_s("%d", &x[i]);
//	}
//
//	arr_reverse(x, nx);
//	printf("배열의요소를 역순으로 정렬했습니다\n");
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] = %d\n", i, x[i]);
//	}
//	free(x);
//
//	system("pause");
//	return 0;
//}