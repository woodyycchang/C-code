//�i����
/*
�E �ק�W�z�d�ҡA��X���Z���� 
�E �ǥͦ��Z �@���ʺA (HW)
�ϥΪ̥���J�@�Z���X�Ӿǥ͡A
�A�@�@ ��J�ǥͪ��Ҹզ��Z�A
�èD�X���̪�������
�L�X���ή檺�P�Ǥ����X�P����(�Y�L���ή檺�P�Ǥ]�|�L�Xfail:) 
�L�X�䤤�̰����P�Ǥ����� (�Y���h�� �̰����P���̡A�ЦC�X���ޭȳ̤p��)
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

