#ifndef QSTACK_H
#define QSTACK_H

#include "list.h"

struct stack {
	int size;

	struct listnode *top;
};

struct queue {
	int size;

	struct listnode *head;
	struct listnode *tail;
};

struct stack *create_stack(int value);
struct stack *stack_push(struct stack *s, int value);

#endif