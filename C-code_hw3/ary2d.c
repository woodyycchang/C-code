//張詠嘉
/*
假定某班有5位學生，
每位學生各修3門科目，
請利用二維陣列的方式儲存學生的各科成績，
並將每位學生的各科成績、
總分及平均列印出來，
並找出班上最平均高分的學生
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
