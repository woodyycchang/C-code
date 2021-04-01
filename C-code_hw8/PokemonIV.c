//張詠嘉
/*
回家作業 神奇寶貝圖鑑 IV - 結構傳入函式
‧ 設計一個Pokemon結構包含下列成員： 
‧ char Name[100]: 名字 
‧ int Lv: 等級 
‧ int Hp: 血量 
‧ 並設計二專屬函式輸入與顯示其資訊 
‧ void InputData(struct Pokemon *); 輸入資訊 
‧ void ShowInfo(struct Pokemon); 顯示資訊 
‧ 使用Pokemon 結構宣告兩個結構實體並印出它們的資訊
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
