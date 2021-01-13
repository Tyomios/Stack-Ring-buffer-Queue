#pragma once
#ifndef _H_QUEUEBYTWOSTACKS_C84
#define _H_QUEUEBYTWOSTACKS_C84

#include "Stack.h"

/// @brief Очередь на двух стэках
struct QueueByTwoStacks 
{
	Stack* FirstStack  = new Stack;	//< Стэк для добавления
	Stack* SecondStack = new Stack;	//< Стэк для извлечения
};


/// @brief Функция инициализации очереди
///  
/// @param TwoStacksQueue инициализируемая очередь
void QueueInit(QueueByTwoStacks* TwoStacksQueue);

/// @brief Добавить элемент в очередь
/// 
/// @param data			Значение вставляемого элемента
/// @param TwoStacksQueue	Очередь, в которую добавляем данные
void PushQueue(int data, QueueByTwoStacks* TwoStacksQueue);

/// @brief Вытащить элемент из очереди
/// 
/// @param TwoStacksQueue очередь, из которой извлекают элемент
/// 
/// @return Значение первого добавленного элемента
int PopQueue(QueueByTwoStacks* TwoStacksQueue);

/// @brief Возвращает индекс элемента, который будет удален 
///			при использовании PopQueue()
/// 
/// @param TwoStacksQueue используемая очередь
/// 
/// @return Индекс элемента
int GetTopQueue(QueueByTwoStacks* TwoStacksQueue);

/// @brief Получить размер заполненной очереди
/// 
/// @param TwoStacksQueue используемая очередь
/// 
/// @return Длина очереди
int GetLengthQueue(QueueByTwoStacks* TwoStacksQueue);
#endif 
