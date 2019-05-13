//B-Дерево. Поиск. Вставка. Удаление.
#include "Header.h"
#include <iostream>

using namespace std;

int main() {
	btreeNode *root;
	root = NULL;
	setlocale(LC_ALL, "Rus");
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
			root = insertion(val, root); 
			break;
		case 2:
			cout << "удалить число: ";
			cin >> val;
			root = deletion(val, root, root);
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