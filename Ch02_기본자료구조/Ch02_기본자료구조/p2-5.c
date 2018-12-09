//#include <stdio.h>
//#include <stdlib.h>
///*배열 요소의 최대값을 구하는 함수*/
//
////요소가 n인 배열 a의 요소의 최댓값을 구합니다
//int maxof(const int a[], int n) { //int a[]대신 int *a를 써도 같다
//	int i;
//	int max = a[0];
//	for (i = 1; i < n; i++) { // i= 1,2,3,4 네번만 검사하면 된다
//		if (a[i] > max) max = a[i];
//	}return max;
//	
//}
//
//int main(void)
//{
//	int i;
//	int *height; //배열 첫번째 요소의 포인터
//	int number; //인원 = 배열 height의 요소 개수
//	printf("사람 수: ");
//	scanf_s("%d", &number);
//	height = calloc(number, sizeof(int)); //요소 개수 number개인 배열 생성
//	printf("%d 사람의 키를 입력하세요\n", number);
//	for (i = 0; i < number; i++) {
//		printf("height[%d] : ", i);
//		scanf_s("%d", &height[i]);
//	}
//	printf("최댓값은 %d입니다\n", maxof(height, number));
//	free(height);
//
//	system("pause");
//	return 0;
//}