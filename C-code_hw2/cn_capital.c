//張詠嘉
/*
(加分題): 中文大寫數字輸出
輸入一個金額1~99999整數
印中文大寫數字金額
中文大寫1~9: 壹,貳,參,肆,伍,陸,柒,捌,玖
需要印出單位: 萬,仟,佰,拾
不需輸出"零"
最後要印出"元整"
輸入錯誤數值範圍,顯示錯誤後程式直接結束
*/
#include <stdio.h>
int main() {
	int input_num;
	printf("請輸入金額: ");
	scanf("%d", &input_num);
	if ((input_num < 1) || (input_num > 99999)) {
		printf("輸入錯誤數值範圍\n");
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
				printf("壹");
				break;
			case 2:
				printf("貳");
				break;
			case 3:
				printf("參");
				break;
			case 4:
				printf("肆");
				break;
			case 5:
				printf("伍");
				break;
			case 6:
				printf("陸");
				break;
			case 7:
				printf("柒");
				break;
			case 8:
				printf("捌");
				break;
			case 9:
				printf("玖");
				break;
		}
		if (j != 0 ) {
			switch (i) {
				case 5:
					printf("萬");
					break;
				case 4:
					printf("仟");
					break;
				case 3:
					printf("佰");
					break;
				case 2:
					printf("拾");
					break;
			}
		}
	}
	printf("元整\n");
	return 0;
}
