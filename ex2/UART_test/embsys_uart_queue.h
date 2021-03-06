#ifndef EMBSYS_UART_QUEUE_H_
#define EMBSYS_UART_QUEUE_H_

struct QueueRecord 
{
	int Front;
	int Rear;
	int Size;
	int Capacity;
	unsigned char* Array;
};
typedef struct QueueRecord Queue;

Queue* InitQueue(Queue* Q, unsigned char* queueArray, int arraySize);

int Next(int Value, Queue* Q);

void Enqueue(unsigned char X, Queue* Q);

void EnqueueString(char* X, unsigned int length, Queue* Q);

void Dequeue(Queue* Q);

int IsFull(Queue* Q);

int IsEmpty(Queue* Q);

char Front(Queue* Q);

#endif /*EMBSYS_UART_QUEUE_H_*/

