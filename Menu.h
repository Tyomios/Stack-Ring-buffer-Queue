#ifndef __H_MENU_A42
#define __H_MENU_A42

#include "Stack.h"
#include "RingBuffer.h"
#include "QueueByRingBuffer.h"
#include "QueueByTwoStaсks.h"

/// @brief Функция основного меню
/// 
/// @retval 1 Если пользователь выбрал стэк
/// @retval 2 Если пользователь выбрал кольцевой буфер
/// @retval 3 Если пользователь выбрал очередь на кольцевом буфере
/// @retval 4 Если пользователь выбрал очередь на 2х стэках
/// 
/// @return Номер структуры 
int ChooseStruct();

/// @brief Меню для работы со стэком
/// 
/// @param stack Стэк, с которым производим действия
void StackMenu(Stack* stack);

/// @brief Меню для работы с кольцевым буфером
/// 
/// @param ringBuffer Буфер, с которым производим действия
void RingBufferMenu(RingBuffer* ringBuffer);

/// @brief Меню для работы с очередью на кольцевом буфере
/// 
/// @param queueByRingBuffer Очередь, над которой производятся операции
void QueueRingBufferMenu(QueueByRingBuffer* queueByRingBuffer);

/// @brief Меню для работы с очередью на 2х стэках
/// 
/// @param TwoStacksQueue Очередь, над которой производятся операции
void TwoStacksQueueMenu(QueueByTwoStacks* TwoStacksQueue);
#endif