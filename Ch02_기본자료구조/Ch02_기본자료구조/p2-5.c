//#include <stdio.h>
//#include <stdlib.h>
///*�迭 ����� �ִ밪�� ���ϴ� �Լ�*/
//
////��Ұ� n�� �迭 a�� ����� �ִ��� ���մϴ�
//int maxof(const int a[], int n) { //int a[]��� int *a�� �ᵵ ����
//	int i;
//	int max = a[0];
//	for (i = 1; i < n; i++) { // i= 1,2,3,4 �׹��� �˻��ϸ� �ȴ�
//		if (a[i] > max) max = a[i];
//	}return max;
//	
//}
//
//int main(void)
//{
//	int i;
//	int *height; //�迭 ù��° ����� ������
//	int number; //�ο� = �迭 height�� ��� ����
//	printf("��� ��: ");
//	scanf_s("%d", &number);
//	height = calloc(number, sizeof(int)); //��� ���� number���� �迭 ����
//	printf("%d ����� Ű�� �Է��ϼ���\n", number);
//	for (i = 0; i < number; i++) {
//		printf("height[%d] : ", i);
//		scanf_s("%d", &height[i]);
//	}
//	printf("�ִ��� %d�Դϴ�\n", maxof(height, number));
//	free(height);
//
//	system("pause");
//	return 0;
//}