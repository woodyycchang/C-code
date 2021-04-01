//張詠嘉
/*
製作一個簡單的計算機 
功能 
數字的＋,－,＊,／ (不需要判斷除以0之情況)
輸入輸出格式 ( 格式必須與下面程式結果一致 )
連續輸入兩個數字，以空白鍵分開
按下Enter後算出結果 (顯示小數點後兩位)
*/ 
#include <stdio.h>
int main() {
	double a, b;
	printf("請輸入兩個數字: ");
	scanf("%lf", &a);
	scanf("%lf", &b);
	printf("計算結果:\n");
	printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
	printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
	printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
	printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
	return 0;
}
