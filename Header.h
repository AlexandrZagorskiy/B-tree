#pragma once
#ifndef Header
#define Header

#define MAX 4
#define MIN 2

struct btreeNode {
	int val[MAX + 1], count;
	btreeNode *link[MAX + 1];
};

/* �������� ���� */
btreeNode *createNode(int val, btreeNode *child, btreeNode *root);

/* ������� �������� � ����������� ������� */
void addValToNode(int val, int pos, btreeNode *node, btreeNode *child);

/*������� ���� */
void splitNode(int val, int *pval, int pos, btreeNode *node, btreeNode *child, btreeNode **newNode);

/* ��������� �������� val � ������ */
int setValueInNode(int val, int *pval, btreeNode *node, btreeNode **child);

/* ������� val � ������ */
btreeNode *insertion(int val, btreeNode *root);

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
btreeNode* deletion(int val, btreeNode *myNode, btreeNode *root);

/* ����� ������ */
void searching(int val, int *pos, btreeNode *myNode);

/*  �������� ������   */
void traversal(btreeNode *myNode);

#endif
