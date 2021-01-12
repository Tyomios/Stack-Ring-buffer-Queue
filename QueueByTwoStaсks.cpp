#include "QueueByTwoStañks.h"
#include "Stack.h"


void QueueInit(QueueByTwoStacks* TwoStacksQueue)
{
	StackInit(TwoStacksQueue->FirstStack);
	StackInit(TwoStacksQueue->SecondStack);
}


void PushQueue(int data, QueueByTwoStacks* TwoStacksQueue)
{
	Push(data, TwoStacksQueue->FirstStack);
}


int PopQueue(QueueByTwoStacks* TwoStacksQueue)
{
	if (IsEmpty(TwoStacksQueue->SecondStack)) 
	{
		while (!IsEmpty(TwoStacksQueue->FirstStack)) 
		{
			Push(Pop(TwoStacksQueue->FirstStack), TwoStacksQueue->SecondStack);
		}
	}

	return Pop(TwoStacksQueue->SecondStack);
}


int GetTopQueue(QueueByTwoStacks* TwoStacksQueue)
{
	if (IsEmpty(TwoStacksQueue->FirstStack)) 
	{
		return GetTop(TwoStacksQueue->SecondStack);
	}

	return GetTop(TwoStacksQueue->FirstStack);
}


int GetLengthQueue(QueueByTwoStacks* TwoStacksQueue)
{
	if (IsEmpty(TwoStacksQueue->FirstStack)) 
	{
		return 0;
	}

	return ((TwoStacksQueue->FirstStack->Length) + (TwoStacksQueue->SecondStack->Length));
}