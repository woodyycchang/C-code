//張詠嘉
/*
‧ 修改上述範例，算出全班平均 
‧ 學生成績 一維動態 (HW)
使用者先輸入一班有幾個學生，
再一一 輸入學生的考試成績，
並求出它們的平均值
印出不及格的同學之號碼與分數(若無不及格的同學也會印出fail:) 
印出其中最高分同學之分數 (若有多筆 最高分同分者，請列出索引值最小的)
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int students;
	int *score;
	int i;
	int total = 0, highestscore = 0, highestnumber = 0;
	scanf("%d",&students);
	score=(int *)malloc( sizeof(int)*students );
	for ( i=0; i < students; i++ ) {
		scanf("%d",&score[i]);
	}
	for ( i=0; i < students; i++ ) {
		total += score[i];
	}
	//average
	printf("avg = %.2lf\n", (double)total / students);
	//fail
	printf("fail:\n");
	for ( i=0; i < students; i++ ) {
		if (score[i] < 60) {
			printf("%d: %d\n", i+1, score[i]);
		}
		if (score[i] > highestscore) {
			highestscore = score[i];
			highestnumber = i+1;
		}
	}
	//highestscore
	printf("highest:\n%d: %d\n", highestnumber, highestscore);
	free(score);
	score = NULL;
	return 0;
}

