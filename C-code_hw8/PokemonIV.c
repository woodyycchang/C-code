//�i����
/*
�^�a�@�~ ���_�_����Ų IV - ���c�ǤJ�禡
�E �]�p�@��Pokemon���c�]�t�U�C�����G 
�E char Name[100]: �W�r 
�E int Lv: ���� 
�E int Hp: ��q 
�E �ó]�p�G�M�ݨ禡��J�P��ܨ��T 
�E void InputData(struct Pokemon *); ��J��T 
�E void ShowInfo(struct Pokemon); ��ܸ�T 
�E �ϥ�Pokemon ���c�ŧi��ӵ��c����æL�X���̪���T
*/
#include <stdio.h>

struct Pokemon {
	char Name[100];
	int Lv;
	int Hp;
};

void InputData(struct Pokemon*);
void ShowInfo(struct Pokemon);

int main() {
	struct Pokemon p[2];
	int i;
	for (i=0; i<2; i++) InputData(&p[i]);
	printf("\n>>>\n\n");
	for (i=0; i<2; i++) ShowInfo(p[i]);
	system("pause");
	return 0;
}

void InputData(struct Pokemon *Data) {
	scanf("%s", &Data->Name);
	scanf("%d", &Data->Lv);
	scanf("%d", &Data->Hp);
}

void ShowInfo(struct Pokemon Info) {
	printf("Name: %s\n", Info.Name);
	printf("Lv: %d\n", Info.Lv);
	printf("Hp: %d\n", Info.Hp);
	printf("\n");
}
