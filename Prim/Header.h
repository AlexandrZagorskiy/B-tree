#pragma once
#include "stdafx.h"
#include <string>
#include "Header.h"
#include "iostream"
using  namespace std;




		

struct node {
	int key;
	string name;
	node *next;
} ;
class Htable {
public:
	node* table[50];
	int massk[50];
    int i = 0;
	int h(int key) {
		return key % 50;
	};
	void add() {
		int key;
		string name;
		cout << endl << "write key";
		cin >> key;
		masskey(key);
		cin.get();
		cout << endl << "write name";
		getline(cin, name);
		if (table[h(key)] == nullptr) {
			table[h(key)] = new node;
			table[h(key)]->key = key;
			table[h(key)]->name = name;
			table[h(key)]->next = nullptr;
		}
		else {
			node* t = new node;
			t->key = key;
			t->name = name;
			t->next = table[h(key)];
			table[h(key)] = t;
		};

	};
	void masskey(int key) {
		
		massk[i] = key;
		i++;
	};
	void delmas(int key) {
		for (int j = 0; j < i; j++)
			if (massk[j] == key) {
				massk[j] = 0;
				return;
			};
	};
	bool proverka(int key) {
		
		for (int j = 0; j < i; j++) {
			cout << j << i;
			if (key == massk[j]) {

				return true;
				break;
			}
			else if (j == i - 1)
				return false;
		}
			
	};
		
	void find(int key) {
		node * t = table[h(key)];
		while (t != nullptr) {
			
			if (t->key == key) {
				cout << endl << t->key << "   " << t->name;
				return;
			}
			else 
				t = t->next;
				
			
		};
		
	};
	void del(int key){
		node * t = table[h(key)];
		if (t->key == key) {
			if (t->next == nullptr) {
				table[h(key)] = nullptr;
				delmas(key);
				return;
			}
			else {
				table[h(key)] = t->next;
				delmas(key);
				return;
			};
		}
		else
			while (t->next != nullptr) {
				if (t->next->key == key) {
					node *x = t->next;
					if (x->next == nullptr) {
						t->next = nullptr;
						delmas(key);
						return;
					}
					else {
						t->next = x->next;
						delmas(key);
						return;
					};

				};
				t = t->next;
			};
	    cout << endl << " the key does not exist";
	};







};


