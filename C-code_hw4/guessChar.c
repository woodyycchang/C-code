//�i����
/*
�E ��J�|�줣���мƦr (0~9), �����q�����D��
�E ��J�|�줣���мƦr (0~9), �����z�q������
�E �����ˬd�ϥΪ̿�J���榡
�E ���J�����׻P�D�جۦP, �{������
�E �C���W�h
�E �q�����D��: 1234 �z�q���Ʀr: 5283
�E ���G�� 1A1B ��ܱz�@�q��F���ơA�䤤���@�Ӧr��m��A�t�@ �Ӧr��m����
�E �䤤�AA ��ܲq��@�Ӧr�B��m�]��AB ��ܲq��@�� �r���O��m����C
*/
#include <stdio.h>
#include <string.h>
int main() {
	char answer[4], guess[4];
	int i, j, A, B;
	printf("Enter the question: ");
	scanf("%s", &answer);
	do {
		A = 0;
		B = 0;
		printf("guess: ");
		scanf("%s", &guess);
		for (i=0; i<4; i++) {
			for (j=0; j<4; j++) {
				if (answer[i] == guess[j]) {
					if (i == j)  A++;
					else B++;
				}
			}
		}
		printf("%dA%dB\n", A, B);
	} while (A < 4);
	printf("You Win!\n");
	return 0;
}
