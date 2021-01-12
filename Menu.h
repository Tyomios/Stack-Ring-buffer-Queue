#ifndef __H_MENU_A42
#define __H_MENU_A42

#include "Stack.h"
#include "RingBuffer.h"
#include "QueueByRingBuffer.h"
#include "QueueByTwoSta�ks.h"

/// @brief ������� ��������� ����
/// 
/// @retval 1 ���� ������������ ������ ����
/// @retval 2 ���� ������������ ������ ��������� �����
/// @retval 3 ���� ������������ ������ ������� �� ��������� ������
/// @retval 4 ���� ������������ ������ ������� �� 2� ������
/// 
/// @return ����� ��������� 
int ChooseStruct();

/// @brief ���� ��� ������ �� ������
/// 
/// @param stack ����, � ������� ���������� ��������
void StackMenu(Stack* stack);

/// @brief ���� ��� ������ � ��������� �������
/// 
/// @param ringBuffer �����, � ������� ���������� ��������
void RingBufferMenu(RingBuffer* ringBuffer);

/// @brief ���� ��� ������ � �������� �� ��������� ������
/// 
/// @param queueByRingBuffer �������, ��� ������� ������������ ��������
void QueueRingBufferMenu(QueueByRingBuffer* queueByRingBuffer);

/// @brief ���� ��� ������ � �������� �� 2� ������
/// 
/// @param TwoStacksQueue �������, ��� ������� ������������ ��������
void TwoStacksQueueMenu(QueueByTwoStacks* TwoStacksQueue);
#endif