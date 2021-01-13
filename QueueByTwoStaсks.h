#pragma once
#ifndef _H_QUEUEBYTWOSTACKS_C84
#define _H_QUEUEBYTWOSTACKS_C84

#include "Stack.h"

/// @brief ������� �� ���� ������
struct QueueByTwoStacks 
{
	Stack* FirstStack = new Stack;	//< ���� ��� ����������
	Stack* SecondStack = new Stack;	//< ���� ��� ����������
};


/// @brief ������� ������������� �������
///  
/// @param TwoStacksQueue ���������������� �������
void QueueInit(QueueByTwoStacks* TwoStacksQueue);

/// @brief �������� ������� � �������
/// 
/// @param data				�������� ������������ ��������
/// @param TwoStacksQueue	�������, � ������� ��������� ������
void PushQueue(int data, QueueByTwoStacks* TwoStacksQueue);

/// @brief �������� ������� �� �������
/// 
/// @param TwoStacksQueue �������, �� ������� ��������� �������
/// 
/// @return �������� ������� ������������ ��������
int PopQueue(QueueByTwoStacks* TwoStacksQueue);

/// @brief ���������� ������ ��������, ������� ����� ������ 
///			��� ������������� PopQueue()
/// 
/// @param TwoStacksQueue ������������ �������
/// 
/// @return ������ ��������
int GetTopQueue(QueueByTwoStacks* TwoStacksQueue);

/// @brief �������� ������ ����������� �������
/// 
/// @param TwoStacksQueue ������������ �������
/// 
/// @return ����� �������
int GetLengthQueue(QueueByTwoStacks* TwoStacksQueue);
#endif 

