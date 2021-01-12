#include "Menu.h"
#include "Common.h"


#include <iostream>
#include <Windows.h>

using namespace std;


int ChooseStruct()
{
	int userchoose;
	cout << " Choose one of struct:" << endl;
	cout << "1. Stack\n"
		 << "2. Ring buffer\n"
		 << "3. Queue by ring buffer\n"
		 << "4. Queue by two stacks\n" 
		 <<"\nUse Ctrl + C to end app" <<endl;
	
	cin >> userchoose;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Unknown command.\n";
		return ChooseStruct();
	}

	if (userchoose == 1) 
	{
		return 1;
	}
	if (userchoose == 2) 
	{
		return 2;
	}
	if (userchoose == 3) 
	{
		return 3;
	}
	if (userchoose == 4) 
	{
		return 4;
	}
	
	cout << " Thinking You're wrong. Let's try again! " << endl;
	return ChooseStruct();
}


void StackMenu(Stack* stack)
{
	while (true)
	{
		cout << "Here is stack\n" 
			 <<"Size:" << GetLength(stack) << "\n"
			 <<"1. Push \n" 
			 <<"2. Pop\n" 
			 <<"3. Show top\n" 
			 <<"<- Back 0" << endl;

		int choose;
		cin >> choose;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Unknown command.\n";
			return StackMenu(stack);
		}

		switch (choose)
		{
			case 1:
			{
				Push(GetValue(), stack); 
				break;
			}
			case 2:
			{
				if (!IsEmpty(stack))
				{
					cout << "Deleting top " << Pop(stack) << "..." << endl;;
					system("pause");
					break;
				}
				
				cout << "Empty Stack" << endl;
				system("pause");
				break;
			}
			case 3:
			{
				if (IsEmpty(stack) == false)
				{
					cout << "Top is " << GetTop(stack) << endl;
					system("pause");
					break;
				}
				if (IsEmpty(stack) == true)
				{
					cout << "Empty Stack" << endl;
					system("pause");
				}
				break;
			}
			case 0:
			{
				return;
			}
			default:
			{
				cout << "There is no command from list. Choose another." << endl;
				system("pause");
				break;
			}
		}
		system("cls");
	}
}


void RingBufferMenu(RingBuffer* ringBuffer) 
{
	while (true)
	{
		cout << "Here is ring buffer\n"
			 << "Size: 8\n" << endl;

		ShowSpace(ringBuffer);

		cout << "1. Push \n" 
			 << "2. Pop\n" 
			 << "3. Show top\n" 
			 << "<- Back 0" << endl;


		int choose;
		cin >> choose;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Unknown command.\n";
			return RingBufferMenu(ringBuffer);
		}

		switch (choose)
		{
			case 1:
			{
				Push(GetValue(), ringBuffer);
				break;

				system("pause");
				break;
			}
			case 2:
			{
				if (ringBuffer->OcupiedSpace == 0)
				{
					cout << "Buffer is empty" << endl;
					system("pause");
					break;
				}
				cout << "Deleting top is " << Pop(ringBuffer) << endl;
				system("pause");
				break;
			}
			case 3:
			{
				if (ringBuffer->FullSize == 0 || ringBuffer->OcupiedSpace == 0)
				{
					cout << "Buffer is empty (" << endl;
					system("pause");
					break;
				}

				cout << "Top is " << ringBuffer->Data[GetTop(ringBuffer)] << endl;
				system("pause");
				break;
			}
			case 0:
			{
				return;
			}
			default:
			{
				cout << "There is no command from list. Choose another." << endl;
				system("pause");
				break;
			}
		}
		system("cls");
	}
}

void QueueRingBufferMenu(QueueByRingBuffer* queueByRingBuffer)
{
	while (true)
	{
		cout << "Here is a queue by ring buffer\n"
			 << "Size: 8\n" << endl;

		ShowSpaceQueue(queueByRingBuffer);

		cout << "1. Push \n"
			 << "2. Pop\n"
			 << "3. Show top\n"
			 << "<- Back 0" << endl;


		int choose;
		cin >> choose;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Unknown command.\n";
			return QueueRingBufferMenu(queueByRingBuffer);
		}

		switch (choose)
		{
			case 1:
			{
				PushInQueue(GetValue(), queueByRingBuffer);
				break;

				system("pause");
				break;
			}
			case 2:
			{
				if (queueByRingBuffer->queueByRingBuffer->OcupiedSpace == 0)
				{
					cout << "Buffer is empty (" << endl;
					system("pause");
					break;
				}

				cout << "Deleting top is " << PopInQueue(queueByRingBuffer) << endl;
				system("pause");
				break;
			}
			case 3:
			{
				if (queueByRingBuffer->queueByRingBuffer->FullSize == 0 
					|| queueByRingBuffer->queueByRingBuffer->OcupiedSpace == 0)
				{
					cout << "Buffer is empty (" << endl;
					system("pause");
					break;
				}

				cout << "Top is " << queueByRingBuffer->queueByRingBuffer->Data[GetTopQueue(queueByRingBuffer)] << endl;
				system("pause");
				break;
			}
			case 0:
			{
				return;
			}
			default:
			{
				cout << "There is no command from list. Choose another." << endl;
				system("pause");
				break;
			}
		}
		system("cls");
	}
}

void TwoStacksQueueMenu(QueueByTwoStacks* TwoStacksQueue)
{
	while (true)
	{
		cout << "Here is queue powered by two stacks\n"
			 << "Size:" << GetLengthQueue(TwoStacksQueue) << "\n"
			 << "1. Push \n"
			 << "2. Pop\n"
			 << "3. Show top\n"
			 << "<- Back 0" << endl;


		int choose;
		cin >> choose;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Unknown command.\n";
			return TwoStacksQueueMenu(TwoStacksQueue);
		}

		switch (choose)
		{
			case 1:
			{
				PushQueue(GetValue(), TwoStacksQueue);
				break;
			}
			case 2:
			{
				if (IsEmpty(TwoStacksQueue->FirstStack)) 
				{
					cout << " Queue is empty (" << endl;
					system("pause");
					break;
				}

				cout << "Deleting " << PopQueue(TwoStacksQueue) << "..." << endl;;
				system("pause");
				break;
			}
			case 3:
			{
				if (IsEmpty(TwoStacksQueue->FirstStack)) 
				{
					cout << " Queue is empty (" << endl;
					system("pause");
					break;
				}

				cout << "Top is " << GetTopQueue(TwoStacksQueue) << endl;
				system("pause");
				break;
			}
			case 0:
			{
				return;
			}
			default:
			{
				cout << "There is no command from list. Choose another." << endl;
				system("pause");
				break;
			}
		}
		system("cls");
	}
}