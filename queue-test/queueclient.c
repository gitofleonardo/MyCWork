#include<stdio.h>
#include"queueADT.h"

int main() {

	Queue q1;

	q1=creat();

	for (int i = 0; i < 10; i++) {
		add(q1, i);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d", del(q1));
	}

	destory(q1);

	getchar();
	getchar();
	return 0;
}
