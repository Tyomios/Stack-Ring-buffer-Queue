#include "Menu.h"

#include <iostream>


int main()
{
    int numberOfStruct;

    while(true)
    {
        numberOfStruct = ChooseStruct();

        if (numberOfStruct == 1)
        {
            Stack* stack = new Stack;
            StackInit(stack);
            StackMenu(stack);
            delete stack;
        }
        if (numberOfStruct == 2)
        {
            RingBuffer* ringbuffer = new RingBuffer;
            InitBuffer(ringbuffer);
            RingBufferMenu(ringbuffer);
            delete ringbuffer;
        }
        if (numberOfStruct == 3)
        {
            QueueByRingBuffer* queueByRingBuffer = new QueueByRingBuffer;
            InitQueue(queueByRingBuffer);
            QueueRingBufferMenu(queueByRingBuffer);
            delete queueByRingBuffer;
        }
        if (numberOfStruct == 4) 
        {
            QueueByTwoStacks* TwoStacksQueue = new QueueByTwoStacks;
            QueueInit(TwoStacksQueue);
            TwoStacksQueueMenu(TwoStacksQueue);
            delete TwoStacksQueue;
        }
        system("cls");
    }
    return 0;
}