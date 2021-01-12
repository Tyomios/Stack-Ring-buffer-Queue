#pragma once
#ifndef _H_QUEUEBYRINGBUFFER_D005
#define _H_QUEUEBYRINGBUFFER_D005

#include "RingBuffer.h"

/// @brief ������� �� ��������� ������
struct QueueByRingBuffer 
{
	RingBuffer* queueByRingBuffer = new RingBuffer; ///< ������� 
};

/// @brief ������� ������������� �������
/// 
/// @param queueByRingBuffer ���������������� �������
/// 
/// @return ���������������� �������
int* InitQueue(QueueByRingBuffer* queueByRingBuffer);

/// @brief �������� �������� � �������
/// 
/// @param data				  �������� ������������ ��������
/// @param queueByRingBuffer  ������� �������
void PushInQueue(int data, QueueByRingBuffer* queueByRingBuffer);

/// @brief �������� ����� ������ ������� �� �������
/// 
/// @return �������� ��������
int PopInQueue(QueueByRingBuffer* queueByRingBuffer);

/// @brief ������� ������ ��������, ������� �������� ��� 
///			������������� Pop()
/// 
/// @param queueByRingBuffer ������� �������
/// 
/// @return ������ ��������
int GetTopQueue(QueueByRingBuffer* queueByRingBuffer);
#endif 
