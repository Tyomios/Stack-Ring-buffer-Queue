#include "QueueByRingBuffer.h"


int* InitQueue(QueueByRingBuffer* queueByRingBuffer)
{
	int lenght = queueByRingBuffer->queueByRingBuffer->Lenght;

	queueByRingBuffer->queueByRingBuffer->Data = new int[lenght];

	return queueByRingBuffer->queueByRingBuffer->Data;
}


void PushInQueue(int data, QueueByRingBuffer* queueByRingBuffer)
{
	Push(data, queueByRingBuffer->queueByRingBuffer);
}


int PopInQueue(QueueByRingBuffer* queueByRingBuffer)
{
	return Pop(queueByRingBuffer->queueByRingBuffer);
}


int GetTopQueue(QueueByRingBuffer* queueByRingBuffer)
{
	return GetTop(queueByRingBuffer->queueByRingBuffer);
}