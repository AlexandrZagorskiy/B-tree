#pragma once
#ifndef Header
#define Header

#define MAX 4
#define MIN 2

struct btreeNode {
	int val[MAX + 1], count;
	btreeNode *link[MAX + 1];
};
extern btreeNode *root;

/* �������� ���� */
btreeNode * createNode(int val, btreeNode *child);

/* ������� �������� � ����������� ������� */
void addValToNode(int val, int pos, btreeNode *node, btreeNode *child);

/*������� ���� */
void splitNode(int val, int *pval, int pos, btreeNode *node, btreeNode *child, btreeNode **newNode);

/* ��������� �������� val � ������ */
int setValueInNode(int val, int *pval, btreeNode *node, btreeNode **child);

/* ������� val � ������ */
void insertion(int val);

/* ����������� ������� ��� ��������, ������� ����� ������� */
void copySuccessor(btreeNode *myNode, int pos);

/* ������� �������� �� ��������� ���� � ����������������� �������� */
void removeVal(btreeNode *myNode, int pos);

/* ���������� �������� �� ����-�������� � ������� ������� */
void doRightShift(btreeNode *myNode, int pos);

/* ���������� �������� �� ����-�������� � ������ ������� */
void doLeftShift(btreeNode *myNode, int pos);

/* ������� ������*/
void mergeNodes(btreeNode *myNode, int pos);

/* ��������� ������� ���� */
void adjustNode(btreeNode *myNode, int pos);

/* �������� �� ���� */
int delValFromNode(int val, btreeNode *myNode);

/* �������� �� ������ */
void deletion(int val, btreeNode *myNode);

/* ����� ������ */
void searching(int val, int *pos, btreeNode *myNode);

/*  �������� ������   */
void traversal(btreeNode *myNode);

#endif
