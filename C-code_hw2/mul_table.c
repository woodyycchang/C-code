//�i����
/*
�L�X�U�C�E�E���k��:
���ܡG�b�L�P�����Ҥl���A�N�j�鱱���ܼ�i, j�L�X
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
