//張詠嘉
/*
印出下列九九乘法表:
提示：在印星號的例子中，將迴圈控制變數i, j印出
*/ 
#include <stdio.h>
int main() {
	int i, j;
	for ( j = 1; j < 10; j++ ) {
		for ( i = 1; i < 10; i++ ) {
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
