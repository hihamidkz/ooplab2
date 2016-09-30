#ifndef LIST_H
#define LIST_H

struct listnode {
	int value;
	struct listnode *next;
};

struct listnode *list_add(struct listnode *list, int key, int k);
struct listnode *create_node(int key);
struct listnode *delete_node(struct listnode *list, int k);
struct listnode *movement(struct listnode *list, int p, int k);
int node_count(struct listnode *list);

#endif