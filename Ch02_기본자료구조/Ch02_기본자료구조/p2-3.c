#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *x;
	x = calloc(1, sizeof(int));
	if (x == NULL) {
		puts("�޸� �Ҵ翡 �����߽��ϴ�");
	}
	else {
		*x = 57;
		printf("*x = %d\n", *x);
		free(x);
	}


	system("pause");
	return 0;
}