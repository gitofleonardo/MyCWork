#ifndef QUEUEADT_H
#define QUEUEADT_H
#endif

typedef struct queue_type *Queue;

Queue creat();
void destory(Queue q);
void add(Queue q, int i);
int del(Queue q);
