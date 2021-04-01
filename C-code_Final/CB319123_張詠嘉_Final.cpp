//�i����
/*
�E �p������:
�E �ݩ�: Money �ثe�i�Ϊ��B
�E �ݩ�: ID �ϥΪ̱b��
�E ���}����:
�E ��k: login �n�J
�E ��k: logout �n�X
�E ��k: store �x��
�E ��k: pay ���O (����: �ݧP�_�ثeeCash�O�_�����������B���O)
�E ��k: display �d�ߥثe�l�B
�E �D�{��
�E ��J�b���n�J�����H�U�\��
�E ��J��s��: �x��
�E ��J��p��: ���O
�E ��J��d��:�d�߾l�B
�E ��J��q��: �n�X, �����}�{��
�E �{���|�N�U�b���P��l�B�s�J�w��
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
			cout << "���¡AByeBye!" << endl;
		}

		void store(int m) {
			if (m > 0) {
				Money += m;
				cout << "eCash: �z�s�F" << m << "��" << endl;
			} else {
				cout << "eCash: �п�J�j��0�����B" << endl;
			}
		}

		void pay(int m) {
			if (m > 0) {
				if (m > Money) {
					cout << "eCash: �z��������" << endl;
				} else {
					Money -= m;
					cout << "eCash: �z��F" << m << "��" << endl;
				}
			} else {
				cout << "eCash: �п�J�j��0�����B" << endl;
			}
		}

		void display() {
			cout << "eCash: �z�|��" << Money << "��" << endl;
		}

		string login() {
			cout << "=== �w��ϥ�eCash ===" << endl;
			cout << "eCash: �п�J�z���b��: ";
			cin >> ID;
			f1 = fopen(ID, "r");
			if(f1 == NULL) {
				cout << "eCash: �b�����s�b, �Ĥ@���ϥ�!" << endl;
			} else {
				fscanf(f1, "%d", &Money);
				cout << "eCash: �b���}�ҧ���!" << endl;
			}
			fclose(f1);
			cout << endl;
			return ID;
		}

		void logout() {
			f1 = fopen(ID, "w");
			fprintf(f1, "%d", Money);
			fclose(f1);
			cout << "eCash: �b���n�X, �w�s��!" << endl;
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
		cout << username << "�z�n�A�п�ܶ���:" << endl;
		cout << "s: �x��" << endl;
		cout << "p: ���O" << endl;
		cout << "d: ��ܾl�B" << endl;
		cout << "q: ���}" << endl;
		cout << "> ";
		cin >> op;
		switch(op) {
			case 's':
				cout << "�п�J�x�s���B:" << endl;
				cin >> m;
				e.store(m);
				break;
			case 'p':
				cout << "�п�J���O���B:" << endl;
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
				cout << "Sorry, �L���\\��" << endl;
				break;
		}

		system("pause");
		system("cls");
	}

	return 0;
}

