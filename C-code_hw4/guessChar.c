//張詠嘉
/*
‧ 輸入四位不重覆數字 (0~9), 做為電腦的題目
‧ 輸入四位不重覆數字 (0~9), 做為您猜的答案
‧ 不需檢查使用者輸入之格式
‧ 當輸入之答案與題目相同, 程式結束
‧ 遊戲規則
‧ 電腦的題目: 1234 您猜的數字: 5283
‧ 結果為 1A1B 表示您共猜對了兩位數，其中有一個字位置對，另一 個字位置不對
‧ 其中，A 表示猜對一個字且位置也對，B 表示猜對一個 字但是位置不對。
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
