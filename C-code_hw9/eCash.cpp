//�i����
/*
�E �n�D:
�E �]�p�@���OeCash�����x�ȥd���欰
�E �p������:
�E �ݩ�: Money �ثe�i�Ϊ��B
�E ���}����:
�E ��k: eCash() �غc�� (�NMoney��l�Ƭ�0��)
�E ��k: void store(int m) �x�� (�Nm�s�JMoney��)
�E ��k: void pay(int m) ���O (�NMoney���Om��)
�E (����: �ݧP�_�ثeeCash�O�_�����������B���O)
�E ��k: void display() ��ܥثe�l�B (�NMoney��X��ù�)
�E �D�{��
�E ��J��s��: �x��
�E ��J��p��: ���O
�E ��J��d��:�d�߾l�B
�E ��J��q��: ���}�{��
�d�ҡGhttp://homepage.ntu.edu.tw/~d02922022/C/Demo/eCash.exe
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

	private:
		int Money;
};

int main() {
	char op;
	int m;
	eCash e;

	cout << "=== �w��ϥ�eCash ===" << endl;
	cout << endl;

	while(1) {
		cout << "�z�n�A�п�ܶ���:" << endl;
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
				return 0;
				break;
		}

		system("pause");
		system("cls");
	}

	return 0; //m1����e����Ѻc��
}

