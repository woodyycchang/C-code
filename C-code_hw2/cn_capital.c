//�i����
/*
(�[���D): ����j�g�Ʀr��X
��J�@�Ӫ��B1~99999���
�L����j�g�Ʀr���B
����j�g1~9: ��,�L,��,�v,��,��,�m,��,�h
�ݭn�L�X���: �U,�a,��,�B
���ݿ�X"�s"
�̫�n�L�X"����"
��J���~�ƭȽd��,��ܿ��~��{����������
*/
#include <stdio.h>
int main() {
	int input_num;
	printf("�п�J���B: ");
	scanf("%d", &input_num);
	if ((input_num < 1) || (input_num > 99999)) {
		printf("��J���~�ƭȽd��\n");
		return 1;
	}
	int i, j, k;
	k = 10000;
	for (i = 5; i > 0; i--){
		j = (input_num / k);
		input_num -= (j * k);
		k /= 10;
		switch (j) {
			case 1:
				printf("��");
				break;
			case 2:
				printf("�L");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("�v");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("��");
				break;
			case 7:
				printf("�m");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("�h");
				break;
		}
		if (j != 0 ) {
			switch (i) {
				case 5:
					printf("�U");
					break;
				case 4:
					printf("�a");
					break;
				case 3:
					printf("��");
					break;
				case 2:
					printf("�B");
					break;
			}
		}
	}
	printf("����\n");
	return 0;
}
