#include "RingBuffer.h"


int* InitBuffer(RingBuffer* ringBuffer) 
{
	ringBuffer->Data = new int[ringBuffer->Lenght];
	return ringBuffer->Data;
}



int GetTop(RingBuffer* ringBuffer)
{
	return ringBuffer->IndexOut;
}


void Push(int data, RingBuffer* ringBuffer)
{
	ringBuffer->Data[ringBuffer->IndexIn] = data;
	ringBuffer->IndexIn = ++ringBuffer->IndexIn % ringBuffer->Lenght;
	++ringBuffer->FullSize;

	if (ringBuffer->OcupiedSpace < ringBuffer->Lenght)
	{
		++ringBuffer->OcupiedSpace;
	}
	if (ringBuffer->FullSize > ringBuffer->Lenght)
	{
		ringBuffer->IndexOut = ++ringBuffer->IndexOut % ringBuffer->Lenght;
	}
}


int Pop(RingBuffer* ringBuffer)
{
	--ringBuffer->OcupiedSpace;
	int temp = ringBuffer->IndexOut;
	ringBuffer->IndexOut = ++ringBuffer->IndexOut % ringBuffer->Lenght;

	return ringBuffer->Data[temp];
}