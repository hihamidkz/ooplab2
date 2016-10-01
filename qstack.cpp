#include <iostream>
#include <cstdlib>
#include "qstack.h"
#include "list.h"

using namespace std;

struct listnode *node_add(struct listnode *list, int value) {
	if (list == NULL) {
		list = create_node(value);
		return list;
	}

	struct listnode *node = create_node(value);
	node->next = list;
	return node;
}

struct stack *create_stack(int value)
{
	struct stack *s;

	s = new struct stack;

	if (s != NULL) {
		s->top->value = value;
		s->top->next = NULL;
		s->size = 0;
	}
	return s;
}

struct stack *stack_push(struct stack *s, int value)
{
	if (s == NULL) {
		s = create_stack(value);
		return s;
	}

	s->top = node_add(s->top, value);
	++s->size;
}

int stack_pop(struct stack *s)
{
	int value;

	if (s == NULL) {
		return -1;
		cout << "stack: stack underflow" << endl;
	}

	--s->size;
	value = s->top->value;
	s->top = s->top->next;
	return value;
}

