#include <iostream>
#include "list.h"
using namespace std;

struct listnode *create_node(int value)
{
	struct listnode *node;

	node = new struct listnode;

	if (node == NULL)
		return NULL;
	node->value = value;
	node->next = NULL;
	return node;
}

struct listnode *list_add(struct listnode *list, int key, int k)
{
	int i;
	struct listnode *node;
	struct listnode *temp;
	struct listnode *p;
	
	if (list == NULL) {
		list = create_node(key);
		return list;
	}
	p = list;
	for (i = 1; i < k; ++i) {
		if (p->next == NULL)
			return NULL;
		node = p->next;
		p = p->next;
	}
	node = create_node(key);
	if (p->next == NULL)
		p->next = node;
	else {
		temp = p->next;
		p->next = node;
		node->next = temp;
	}
	return list;
}

struct listnode *delete_node(struct listnode *list, int k)
{
	int i;
	
	struct listnode *p, *prev = NULL;

	p = list;
	for (i = 1; i <= k - 1; ++i) {
		if (p->next == NULL)
			return NULL;
		prev = p;
		p = p->next;
	}
	if (prev == NULL) {
		list = p->next;
		return list;
	} else {
		if (p->next == NULL)
			prev->next = NULL;
		else 
			prev->next = p->next;
	}
	return list;
}

int node_count(struct listnode *list)
{
	int count = 0;

	while (list != NULL) {
		++count;
		list = list->next;
	}
	return count;
}

struct listnode *movement(struct listnode *list, int p, int k)
{
	int i;
	
	struct listnode *node;

	node = list;
	for (i = 1; i < p; ++i) {
		if (node->next == NULL)
			return NULL;
		node = node->next;
	}
	list = list_add(list, node->value, k);
	list = delete_node(list, p);
	return list;
}