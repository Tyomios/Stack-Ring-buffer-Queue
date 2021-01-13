#pragma once
#ifndef _H_COMMON_E88
#define _H_COMMON_E88

#include "RingBuffer.h"
#include "QueueByRingBuffer.h"

/// @brief Функция получения данных 
/// 
/// @return Корректные данные
int GetValue();

/// @brief Функция отображения свободного места 
///			в кольцевом буфере
/// 
/// @param ringBuffer Буфер, в котором отображаются свободные места
void ShowSpace(RingBuffer* ringBuffer);

/// @brief Функция отображения свободного места 
///			в очереди на кольцевом буфере
/// 
/// @param queueByRingBuffer Очередь, в которой отображаются свободные места
void ShowSpaceQueue(QueueByRingBuffer* queueByRingBuffer);
#endif 
