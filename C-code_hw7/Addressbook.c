//�i����
/*
�E �s�@�@�ӳq�T���{�� 
�E �\�� 
�E ��J��i�� �i��J�m�W, �q��, email 
�E ��J��l�� �L�X�ثe��J�Ҧ��H�������e 
�E ��J��s�� ��J�ɦW, �N�Ҧ��H�������e�s�J�ɮ� 
�E ��J��o����J�ɦW, �N�Ҧ��H�������e�q�ɮ�Ū �X 
�E ��J��q�����}�{�� 
�E ��J���H�ƤW����50�H 
�E ��J�榡 
�E ��J��X�����P�U���d�ҬۦP�A�ɮ׮榡���� 
�E �Ѧҽd��: 
�E http://homepage.ntu.edu.tw/~d02922022/C/Demo/Addressbook.exe
*/
#include <stdio.h>
#include <conio.h>

struct AddressBook {
	char name[80];
	char phone[80];
	char email[80];
};

int main() {
	FILE * adfile;
	struct AddressBook p[50];
	char op, str[80];
	int i, n = 0;

	while(1) {
		puts("i ���J");
		puts("l �C�X");
		puts("s �s��");
		puts("o Ū��");
		puts("q ����");

		printf("> ");
		op = getche();
		printf("\n");
		switch(op) {
			case 'i':
				printf("�m�W: ");
				scanf("%s", p[n].name);
				printf("�q��: ");
				scanf("%s", &p[n].phone);
				printf("Email: ");
				scanf("%s", &p[n].email);
				n++;
				printf("���J����!\n");
				break;
			case 'l':
				for(i=0; i<n; i++) {
					printf("No.%d\n", i+1);
					printf("�m�W: %s\n", p[i].name);
					printf("�q��: %s\n", p[i].phone);
					printf("Email: %s\n", p[i].email);
					printf("=================\n");
				}
				break;
			case 's':
				printf("��J�ɦW(.txt): ");
				scanf("%s", &str);
				adfile = fopen(str, "w");
				fprintf(adfile, "%d\n", n);
				for(i=0; i<n; i++) {
					fprintf(adfile, "%s\t", p[i].name);
					fprintf(adfile, "%s\t", p[i].phone);
					fprintf(adfile, "%s\n", p[i].email);
				}
				fclose(adfile);
				printf("�s�ɧ���!\n");
				break;
			case 'o':
				printf("��J�ɦW(.txt): ");
				scanf("%s", &str);
				adfile = fopen(str, "r");
				if(adfile == NULL) {
					printf("�ɮפ��s�b!\n");
				}
				fscanf(adfile,"%d\n", &n);
				for(i=0; i<n; i++) {
					fscanf(adfile,"%s\t", p[i].name);
					fscanf(adfile,"%s\t", &p[i].phone);
					fscanf(adfile,"%s\n", &p[i].email);
				}
				fclose(adfile);
				printf("Ū�ɧ���!\n");
				break;
			case 'q':
				return 0;
				break;
		}

		system("pause");
		system("cls");
	}

	return 0;
}
