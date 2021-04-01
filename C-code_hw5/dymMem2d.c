//張詠嘉
/*
修改上述例子，增加輸出各班平均， 與回收記憶體
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j;
	double sum=0, aver;
	double sub_sum;
	int **student;
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
//動態配置m班各n人之記憶體
	student = (int **)malloc(sizeof(int *) * m);
	for ( j=0; j < m; j++ ) student[j] = (int *)malloc(sizeof(int) * n);
// 分別讀入m班, 各n個同學成績
	for ( j=0; j < m; j++ ) {
		for ( i=0; i < n; i++ ) {
			scanf("%d", &student[j][i]);
		}
	}
// 計算總和
	for ( j=0; j < m; j++ ) for ( i=0; i < n; i++ ) sum+=student[j][i];
// 求平均值
	aver=sum/(m*n);

	for ( j=0; j < m; j++ ) {
		printf("Class %d\n", j+1);
		sub_sum=0;
		for ( i=0; i < n; i++ ) {
			printf(" %d: %d\n", i+1, student[j][i]);
			sub_sum += student[j][i];
		}
		printf(" sum: %d\n", (int)sub_sum);
		printf(" avg: %.2lf\n", sub_sum / n);
	}

	printf("total: %d, avg: %.2lf\n", (int)sum, aver);
	free(student);
	student = NULL;
	return 0;
}
