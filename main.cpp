#include <iostream>
#include <cmath>
#include <ctime>

#include "list.h"
#include "qstack.h"

typedef unsigned char byte;

using namespace std;

int main()
{
	int i, j;
	int count;
	byte arr[10];
	
	struct listnode *list;
	
	srand(time(NULL));
	/*for (i = 0; i < 100; ++i) {
		arr[i] = rand() % 256;
		if (fmod(sqrt(float(arr[i])), 1) == 0.0) {
			list = list_add(list, arr[i], pos);
			++pos;
		}
	}*/
	for (i = 0; i < 10; ++i) {
		arr[i] = rand() % 20;
		//list = list_add(list, arr[i], i);
	}
	/*for (i = 0; i < 10; ++i)
		cout << (int)arr[i] << "\t";
	cout << endl;
	count = node_count(list);
	for (i = 0; i < 9; ++i) {
		for (j = i + 1; j < 10; ++j) {
			if (arr[i] == arr[j]) {
				list = delete_node(list, count + i - 9);
				count = node_count(list);
			}
		}
	}
	for (i = 0; i < count; ++i) {
		cout << list->key << "\t";
		list = list->next;
	}
	cout << endl;
	cout << "count = " << count << endl;*/
	struct stack *d;
	d = create_stack(15);
	return 0;
}