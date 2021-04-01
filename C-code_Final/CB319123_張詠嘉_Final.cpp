//張詠嘉
/*
‧ 私有成員:
‧ 屬性: Money 目前可用金額
‧ 屬性: ID 使用者帳號
‧ 公開成員:
‧ 方法: login 登入
‧ 方法: logout 登出
‧ 方法: store 儲值
‧ 方法: pay 消費 (提醒: 需判斷目前eCash是否有足夠的金額消費)
‧ 方法: display 查詢目前餘額
‧ 主程式
‧ 輸入帳號登入後執行以下功能
‧ 輸入’s’: 儲值
‧ 輸入’p’: 消費
‧ 輸入’d’:查詢餘額
‧ 輸入’q’: 登出, 並離開程式
‧ 程式會將各帳號與其餘額存入硬碟
*/
#include <iostream>
#include <string>
#include <conio.h>
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

		string login() {
			cout << "=== 歡迎使用eCash ===" << endl;
			cout << "eCash: 請輸入您的帳號: ";
			cin >> ID;
			f1 = fopen(ID, "r");
			if(f1 == NULL) {
				cout << "eCash: 帳號不存在, 第一次使用!" << endl;
			} else {
				fscanf(f1, "%d", &Money);
				cout << "eCash: 帳號開啟完成!" << endl;
			}
			fclose(f1);
			cout << endl;
			return ID;
		}

		void logout() {
			f1 = fopen(ID, "w");
			fprintf(f1, "%d", Money);
			fclose(f1);
			cout << "eCash: 帳號登出, 已存檔!" << endl;
		}

	private:
		int Money;
		char ID[100];
		FILE * f1;
};

int main() {
	char op;
	string username;
	int m = 0;
	eCash e;

	username = e.login();

	while(1) {
		cout << username << "您好，請選擇項目:" << endl;
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
				e.logout();
				return 0;
				break;
			default:
				cout << "Sorry, 無此功\能" << endl;
				break;
		}

		system("pause");
		system("cls");
	}

	return 0;
}

