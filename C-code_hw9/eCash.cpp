//張詠嘉
/*
‧ 要求:
‧ 設計一類別eCash模擬儲值卡的行為
‧ 私有成員:
‧ 屬性: Money 目前可用金額
‧ 公開成員:
‧ 方法: eCash() 建構式 (將Money初始化為0元)
‧ 方法: void store(int m) 儲值 (將m存入Money中)
‧ 方法: void pay(int m) 消費 (將Money消費m元)
‧ (提醒: 需判斷目前eCash是否有足夠的金額消費)
‧ 方法: void display() 顯示目前餘額 (將Money輸出於螢幕)
‧ 主程式
‧ 輸入’s’: 儲值
‧ 輸入’p’: 消費
‧ 輸入’d’:查詢餘額
‧ 輸入’q’: 離開程式
範例：http://homepage.ntu.edu.tw/~d02922022/C/Demo/eCash.exe
*/
#include <iostream>
#include <string>
using namespace std;

class eCash {
	public:
		eCash() {
			Money = 0;
		}

		~eCash() {
			cout << "謝謝，ByeBye!" << endl;
		}

		void store(int m) {
			if (m > 0) {
				Money += m;
				cout << "eCash: 您存了" << m << "元" << endl;
			} else {
				cout << "eCash: 請輸入大於0的金額" << endl;
			}
		}

		void pay(int m) {
			if (m > 0) {
				if (m > Money) {
					cout << "eCash: 您的錢不夠" << endl;
				} else {
					Money -= m;
					cout << "eCash: 您花了" << m << "元" << endl;
				}
			} else {
				cout << "eCash: 請輸入大於0的金額" << endl;
			}
		}

		void display() {
			cout << "eCash: 您尚有" << Money << "元" << endl;
		}

	private:
		int Money;
};

int main() {
	char op;
	int m;
	eCash e;

	cout << "=== 歡迎使用eCash ===" << endl;
	cout << endl;

	while(1) {
		cout << "您好，請選擇項目:" << endl;
		cout << "s: 儲值" << endl;
		cout << "p: 消費" << endl;
		cout << "d: 顯示餘額" << endl;
		cout << "q: 離開" << endl;

		cout << "> ";
		cin >> op;
		switch(op) {
			case 's':
				cout << "請輸入儲存金額:" << endl;
				cin >> m;
				e.store(m);
				break;
			case 'p':
				cout << "請輸入消費金額:" << endl;
				cin >> m;
				e.pay(m);
				break;
			case 'd':
				e.display();
				break;
			case 'q':
				return 0;
				break;
		}

		system("pause");
		system("cls");
	}

	return 0; //m1釋放前執行解構式
}

