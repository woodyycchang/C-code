//�i����
/*
���w�Y�Z��5��ǥ͡A
�C��ǥͦU��3����ءA
�ЧQ�ΤG���}�C���覡�x�s�ǥͪ��U�즨�Z�A
�ñN�C��ǥͪ��U�즨�Z�B
�`���Υ����C�L�X�ӡA
�ç�X�Z�W�̥����������ǥ�
*/
#include <stdio.h>
int main() {
	int i, j;
	int score[5][3] = {76,73,85,88,84,76,92,82,92,82,91,85,72,74,73};
	int sum, count;
	double ave_sub;
	int sum_all = 0, count_all = 0, hiscore = 0;
	double hiscore_ave = 0;

	for (i=0; i<5; i++) {
		printf("Student %d\n", i+1);
		sum = 0;
		count = 0;
		for (j=0; j<3; j++) {
			sum += score[i][j];
			count ++;
			printf(" %d: %d\n", j, score[i][j]);
		}
		ave_sub = (double)sum / (double)count;
		sum_all += sum;
		count_all += count;
		if (ave_sub > hiscore_ave) {
			hiscore = i;
			hiscore_ave = ave_sub;
		}
		printf(" sum: %d\n", sum);
		printf(" avg: %.2lf\n", ave_sub);
	}
	printf("total: %d, avg: %.2lf\n", sum_all, (double)sum_all / (double)count_all);
	printf("highest avg: student %d: %.2lf\n", hiscore+1, hiscore_ave);
	return 0;
}
