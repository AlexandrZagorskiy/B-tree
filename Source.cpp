#include "Header.h"
#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	root = NULL;
	int val, opt;
	while (true) {
		cout << "1. �������\t2. ��������\n";
		cout << "3. �����\t4. ��������\n";
		cout << "5. �����\n ������� �����: ";
		cin >> opt;
		cout << endl;
		switch (opt) {
		case 1:
			cout << "�������� �����: ";
			cin >> val;
			insertion(val);
			break;
		case 2:
			cout << "������� �����: ";
			cin >> val;
			deletion(val, root);
			break;
		case 3:
			cout << "����� �����: ";
			cin >> val;
			searching(val, &opt, root);
			break;
		case 4:
			traversal(root);
			break;
		case 5:
			exit(0);
		}
		cout << endl;
	}
}