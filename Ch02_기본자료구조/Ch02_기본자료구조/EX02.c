#include <stdio.h>
#include <stdlib.h>
//Q1 minof �ּҰ����ϱ�
/*
int minof(const int a[], int n) { //int a[]��� int *a�� �ᵵ ����
	int i;
	int min = a[0];
	for (i = 1; i < n; i++) { // i= 1,2,3,4 �׹��� �˻��ϸ� �ȴ�
		if (a[i] < min) min = a[i];
	}return min;
}
int main(void)
{
	int i;
	int *height; //�迭 ù��° ����� ������
	int number; //�ο� = �迭 height�� ��� ����
	printf("��� ��: ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int)); //��� ���� number���� �迭 ����
	printf("%d ����� Ű�� �Է��ϼ���\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", &height[i]);
	}
	printf("�ּҰ��� %d�Դϴ�\n", minof(height, number));
	free(height);

	system("pause");
	return 0;
}*/

//Q2 sumof �հ� ���ϱ�
/*
int sumof(const int *a, int n) { //int a[]��� int *a�� �ᵵ ����
	int i;
	int sum = 0;
	for (i = 0; i < n; i++) { // 4���϶� i= 1,2,3,4 �׹��� �˻��ϸ� �ȴ�
		sum += a[i];
	}
	return sum;
}
int main(void)
{
	int i;
	int *height; //�迭 ù��° ����� ������
	int number; //�ο� = �迭 height�� ��� ����
	printf("��� ��: ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int)); //��� ���� number���� �迭 ����
	printf("%d ����� Ű�� �Է��ϼ���\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", &height[i]);
	}
	printf("n���� Ű�� ���� %d�Դϴ�\n", sumof(height, number));
	free(height);

	system("pause");
	return 0;
}*/

//Q3 ��ձ��ϱ�
/*
double aveof(const int a[], int n) { //int a[]��� int *a�� �ᵵ ����
	int sum = 0;
	for (int i = 0; i < n; i++) { // 4���϶� �׹� �˻�
		sum += a[i];
	}
	double res;
	res = sum / n;
	return res;
}
int main(void)
{
	int i;
	double *height; //�迭 ù��° ����� ������
	int number; //�ο� = �迭 height�� ��� ����
	printf("��� ��: ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(double)); //��� ���� number���� �迭 ����
	printf("%d ����� Ű�� �Է��ϼ���\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", &height[i]);
	}
	printf("n���� Ű�� ����� %d�Դϴ�\n", aveof(height, number));
	free(height);

	system("pause");
	return 0;
}*/

//Q4 �ǽ�2-6 Ű ���������� Ű�� �ִ밪 ���ϱ� >> ������� ������
/*
int randommaxof(const int a[], int n) { //��Ұ� n�� �迭 a�� ����� �ִ� ���ϱ�
	int i;
	int max = a[0];
	for (i = 1; i < n; i++) { // i= 1,2,3,4 �׹��� �˻��ϸ� �ȴ�
		if (a[i] > max) max = a[i];
	}return max;

}

int main(void)
{
	int i;
	int *height; //�迭 ù��° ����� ������
	int number; //�ο� = �迭 height�� ��� ����
	srand(time(NULL));
	number = 5 + rand() % 20;  //*** ����� 5�̻� 20�����ǳ�������
	printf("��� ��: %d ", number);
	height = calloc(number, sizeof(int)); //��� ���� number���� �迭 ����
	for (i = 0; i < number; i++) {
		height[i] = 100 + rand() % 90; //100~189�� ������ ����.����
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("�ִ��� %d�Դϴ�\n", randommaxof(height, number));
	free(height);

	system("pause");
	return 0;
}*/

//Q5 �迭��� �������� �����ϴ� �߰� ������ ������ ����ϱ�
/*
#define swap(type, x, y) do{type t = x; x=y; y = t;} while(0)

 1    2	   3	 4	  5	   6	7
a[0] a[1] a[2] a[3] a[4] a[5] a[6]
a[0] <-> a[6]
a[1] <-> a[5]
a[2] <-> a[4]


void arr_reverse(int a[], int n) {
	int i;
	for (i = 0; i < n / 2; i++)
	{
		swap(int, a[i], a[n - i - 1]);
	}
}

void ary_reverse(int a[], int n) {
	int i;
	for (i = 0; i < n / 2; i++)
	{
		swap(int, a[i], a[n - i - 1]);
	}
}

int main(void)
{
	int i;
	int *x; //�迭 ù��° ����� ������
	int nx; //�迭 x�ǿ�� ����

	printf("��� ����: ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d���� ������ �Է��ϼ���\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}
	printf("\n**���� ���Ľ���**\n");
	for (i = 0; i < nx; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
	ary_reverse(x, nx);
	//printf("�迭�ǿ�Ҹ� �������� �����߽��ϴ�\n");
	for (i = 0; i < nx; i++) {
		printf("%d ", x[i]);
	}
	printf("\n���� ������ �����մϴ�\n");
	free(x);

	system("pause");
	return 0;
}*/




//Q10 �迭�� ��� ��� ������ ����shuffle �Լ� �ۼ�
//void shuffle(int a[], int n);