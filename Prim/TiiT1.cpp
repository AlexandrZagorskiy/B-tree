// TiiT1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include <string>
#include "Header.h"
#include "iostream"
using  namespace std;
int main()
{
	Htable hash;
	while (1) {
		int i, k;
		cout << endl << "1 - add in table / 2 - find in table / 3 - delete in table / 4 - exit";
		cin >> i;
		if (i == 4)
			break;
		else
			switch (i) {
			case 1:
				cout << endl << "how?";
				cin >> k;
				for (k; k != 0; k--) {
					hash.add();
					cout << hash.i;
				};
				break;
			case 2:
				int key;
				cout << endl << "write key";
				cin >> key;
				//if (hash.proverka(key) == true) {
				hash.find(key);
				break;
				//}
				//else {
				//	cout << endl << " the key does not exist";
					//break;
				//}
			case 3:
				int key1;
				cout << endl << "write key";
				cin >> key1;
			//	if (hash.proverka(key1) == true) {
			//		hash.del(key1);
			//		break;
            //               }
			///	else {
			//		cout << endl << " the key does not exist";
					break;
				}
			//}
	};
	system("pause");
    return 0;
}
