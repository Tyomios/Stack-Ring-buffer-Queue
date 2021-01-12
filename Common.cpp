#include "Common.h"

#include <iostream>


using namespace std;


int GetValue()
{
	int value;
	cout << " Enter value:" << endl;
	cin >> value;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Error. You need to enter digits (like 1 or -6).\n";
		return GetValue();
	}

	return value;
}


void ShowSpace(RingBuffer* ringBuffer)
{
	int space = ringBuffer->Lenght - ringBuffer->OcupiedSpace;

	if (space < 0)
	{
		space = 0;
	}

	cout << "Free space: " << space << endl;
	if (space == 0)
	{
		cout << "Warning! Old data changing while Push()" << endl;
	}
}


void ShowSpaceQueue(QueueByRingBuffer* queueByRingBuffer)
{
	int space = queueByRingBuffer->queueByRingBuffer->Lenght
		- queueByRingBuffer->queueByRingBuffer->OcupiedSpace;

	if (space < 0)
	{
		space = 0;
	}

	cout << "Free space: " << space << endl;
	if (space == 0)
	{
		cout << "Warning! Old data changing while Push()" << endl;
	}
}