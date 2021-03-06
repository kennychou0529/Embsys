#ifndef EMBSYS_UART_QUEUE_H_
#define EMBSYS_UART_QUEUE_H_

#define QueueSize 100

struct QueueRecord 
{
	int Front;
	int Rear;
	int Size;
	unsigned char Array[QueueSize];
};
typedef struct QueueRecord Queue;

Queue* InitQueue(Queue* Q);

int Next(int Value, Queue* Q);

void Enqueue(unsigned char X, Queue* Q);

void EnqueueString(char* X, Queue* Q);

void Dequeue(Queue* Q);

#endif /*EMBSYS_UART_QUEUE_H_*/
