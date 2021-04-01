//張詠嘉
/*
‧ 製作一個通訊錄程式 
‧ 功能 
‧ 輸入’i’ 可輸入姓名, 電話, email 
‧ 輸入’l’ 印出目前輸入所有人員之內容 
‧ 輸入’s’ 輸入檔名, 將所有人員之內容存入檔案 
‧ 輸入’o’輸入檔名, 將所有人員之內容從檔案讀 出 
‧ 輸入’q’離開程式 
‧ 輸入之人數上限為50人 
‧ 輸入格式 
‧ 輸入輸出介面與下面範例相同，檔案格式不拘 
‧ 參考範例: 
‧ http://homepage.ntu.edu.tw/~d02922022/C/Demo/Addressbook.exe
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
		puts("i 插入");
		puts("l 列出");
		puts("s 存檔");
		puts("o 讀檔");
		puts("q 結束");

		printf("> ");
		op = getche();
		printf("\n");
		switch(op) {
			case 'i':
				printf("姓名: ");
				scanf("%s", p[n].name);
				printf("電話: ");
				scanf("%s", &p[n].phone);
				printf("Email: ");
				scanf("%s", &p[n].email);
				n++;
				printf("插入完成!\n");
				break;
			case 'l':
				for(i=0; i<n; i++) {
					printf("No.%d\n", i+1);
					printf("姓名: %s\n", p[i].name);
					printf("電話: %s\n", p[i].phone);
					printf("Email: %s\n", p[i].email);
					printf("=================\n");
				}
				break;
			case 's':
				printf("輸入檔名(.txt): ");
				scanf("%s", &str);
				adfile = fopen(str, "w");
				fprintf(adfile, "%d\n", n);
				for(i=0; i<n; i++) {
					fprintf(adfile, "%s\t", p[i].name);
					fprintf(adfile, "%s\t", p[i].phone);
					fprintf(adfile, "%s\n", p[i].email);
				}
				fclose(adfile);
				printf("存檔完成!\n");
				break;
			case 'o':
				printf("輸入檔名(.txt): ");
				scanf("%s", &str);
				adfile = fopen(str, "r");
				if(adfile == NULL) {
					printf("檔案不存在!\n");
				}
				fscanf(adfile,"%d\n", &n);
				for(i=0; i<n; i++) {
					fscanf(adfile,"%s\t", p[i].name);
					fscanf(adfile,"%s\t", &p[i].phone);
					fscanf(adfile,"%s\n", &p[i].email);
				}
				fclose(adfile);
				printf("讀檔完成!\n");
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
