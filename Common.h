#pragma once
#ifndef _H_COMMON_E88
#define _H_COMMON_E88

#include "RingBuffer.h"
#include "QueueByRingBuffer.h"

/// @brief ������� ��������� ������ 
/// 
/// @return ���������� ������
int GetValue();

/// @brief ������� ����������� ���������� ����� 
///			� ��������� ������
/// 
/// @param ringBuffer �����, � ������� ������������ ��������� �����
void ShowSpace(RingBuffer* ringBuffer);

/// @brief ������� ����������� ���������� ����� 
///			� ������� �� ��������� ������
/// 
/// @param queueByRingBuffer �������, � ������� ������������ ��������� �����
void ShowSpaceQueue(QueueByRingBuffer* queueByRingBuffer);
#endif 
