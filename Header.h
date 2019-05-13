#pragma once
#ifndef Header
#define Header

#define MAX 4
#define MIN 2

struct btreeNode {
	int val[MAX + 1], count;
	btreeNode *link[MAX + 1];
};

/* создание узла */
btreeNode *createNode(int val, btreeNode *child, btreeNode *root);

/* Вставка значения в определённую позицию */
void addValToNode(int val, int pos, btreeNode *node, btreeNode *child);

/*деление узла */
void splitNode(int val, int *pval, int pos, btreeNode *node, btreeNode *child, btreeNode **newNode);

/* вставляет значение val в корень */
int setValueInNode(int val, int *pval, btreeNode *node, btreeNode **child);

/* вставка val в дерево */
btreeNode *insertion(int val, btreeNode *root);

/* копирование потомка для занчения, которое нужно удалить */
void copySuccessor(btreeNode *myNode, int pos);

/* удаляет значение из заданного узла и переупорядычевает значения */
void removeVal(btreeNode *myNode, int pos);

/* перемещает значения из узла-родителя у правому потомку */
void doRightShift(btreeNode *myNode, int pos);

/* перемещает значения из узла-родителя у левому потомку */
void doLeftShift(btreeNode *myNode, int pos);

/* слияние корней*/
void mergeNodes(btreeNode *myNode, int pos);

/* настройка данного узла */
void adjustNode(btreeNode *myNode, int pos);

/* удаление из узла */
int delValFromNode(int val, btreeNode *myNode);

/* удаление из дерева */
btreeNode* deletion(int val, btreeNode *myNode, btreeNode *root);

/* поиск данных */
void searching(int val, int *pos, btreeNode *myNode);

/*  просмотр дерева   */
void traversal(btreeNode *myNode);

#endif
