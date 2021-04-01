//張詠嘉
/*
‧ 請寫一函式令其可以判斷傳入參數是否為質數 
‧ int IsPrime(int num);
‧ 是質數的話回傳 1，不是的話回傳 0 
‧ 並將函式分成prime.h、prime.c與main.c
*/
#include <stdio.h>
#include "prime.h"
int main() {
	int num;
	scanf("%d", &num);
	printf("%d", IsPrime(num));
	return 0;
}
