#include "Stack.h"


int GetLength(Stack* stack)
{
	return stack->Length;
}


void StackInit(Stack* stack)
{
	stack->Data = new int[stack->Capacity];
}


void ResizeArray(Stack* stack)
{
	int* newArray = new int[stack->Capacity * stack->GrowthFactor];

	for (int i = 0; i < stack->Capacity; i++)
	{
		newArray[i] = stack->Data[i];
	}

	stack->Capacity *= stack->GrowthFactor;
	delete[] stack->Data;
	stack->Data = newArray;
}


void Push(int element, Stack* stack)
{
	if (stack->Length >= stack->Capacity)
	{
		ResizeArray(stack);
	}

	stack->Data[stack->Length] = element;
	stack->Length++;
}


int GetTop(Stack* stack)
{
	return stack->Data[stack->Length - 1];
}


int Pop(Stack* stack)
{
	--stack->Length;
	return stack->Data[stack->Length];
}



bool IsEmpty(Stack* stack)
{
	return (stack->Length == 0) ? true : false;
}