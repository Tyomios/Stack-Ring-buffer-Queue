#pragma once
#ifndef _H_QUEUEBYRINGBUFFER_D005
#define _H_QUEUEBYRINGBUFFER_D005

#include "RingBuffer.h"

/// @brief Очередь на кольцевом буфере
struct QueueByRingBuffer 
{
	RingBuffer* queueByRingBuffer = new RingBuffer; ///< Очередь 
};

/// @brief Функция инициализации очереди
/// 
/// @param queueByRingBuffer Инициализируемая очередь
/// 
/// @return Инициализируемую очередь
int* InitQueue(QueueByRingBuffer* queueByRingBuffer);

/// @brief Добавить значение в очередь
/// 
/// @param data				  Значение вставляемого элемента
/// @param queueByRingBuffer  Рабочая очередь
void PushInQueue(int data, QueueByRingBuffer* queueByRingBuffer);

/// @brief Вытащить самый старый элемент из очереди
/// 
/// @return Значение элемента
int PopInQueue(QueueByRingBuffer* queueByRingBuffer);

/// @brief Вернуть индекс элемента, который удалится при 
///			использовании Pop()
/// 
/// @param queueByRingBuffer Рабочая очередь
/// 
/// @return Индекс элемента
int GetTopQueue(QueueByRingBuffer* queueByRingBuffer);
#endif 
