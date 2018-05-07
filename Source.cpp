#include "Header.h"
#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	root = NULL;
	int val, opt;
	while (true) {
		cout << "1. Вставка\t2. Удаление\n";
		cout << "3. Поиск\t4. Просмотр\n";
		cout << "5. Выход\n Выбрать пункт: ";
		cin >> opt;
		cout << endl;
		switch (opt) {
		case 1:
			cout << "вставить число: ";
			cin >> val;
			insertion(val);
			break;
		case 2:
			cout << "удалить число: ";
			cin >> val;
			deletion(val, root);
			break;
		case 3:
			cout << "найти число: ";
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