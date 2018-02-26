#include<stdio.h>
#include<stdlib.h>
#include"queueADT.h"

#define MAX 20

struct queue_type {
	int queue[MAX];
	int head;
	int tail;
	int queue_num;
};

static void ter(const char *message) {
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

Queue creat() {
	Queue q = (Queue)malloc(sizeof(Queue));

	if (q == NULL)
		ter("Fail to malloc.");
	q->head = 0;
	q->tail = 0;
	q->queue_num=0;

	return q;
}

void destory(Queue q) {
	free(q);
}

bool is_empty(Queue q) {
	return q->queue_num == 0;
}

bool is_full(Queue q) {
	return q->queue_num == MAX;
}

void add(Queue q,int i) {
	if (is_full(q))
		ter("Queue is full.");
	q->queue[q->tail] = i;
	q->tail = (q->tail + 1) % MAX;
	(q->queue_num)++;
}

int del(Queue q) {
	if (is_empty(q))
		ter("Queue is empty");
	(q->queue_num)--;
	int temp = q->queue[q->head];
	q->head = (q->head + 1) % MAX;
	return temp;
}

void back(Queue q) {
	q->head = 0;
}

void end(Queue q) {
	q->tail = q->queue_num - 1;
}
