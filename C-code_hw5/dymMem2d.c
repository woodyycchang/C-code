//�i����
/*
�ק�W�z�Ҥl�A�W�[��X�U�Z�����A �P�^���O����
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
//�ʺA�t�mm�Z�Un�H���O����
	student = (int **)malloc(sizeof(int *) * m);
	for ( j=0; j < m; j++ ) student[j] = (int *)malloc(sizeof(int) * n);
// ���OŪ�Jm�Z, �Un�ӦP�Ǧ��Z
	for ( j=0; j < m; j++ ) {
		for ( i=0; i < n; i++ ) {
			scanf("%d", &student[j][i]);
		}
	}
// �p���`�M
	for ( j=0; j < m; j++ ) for ( i=0; i < n; i++ ) sum+=student[j][i];
// �D������
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
