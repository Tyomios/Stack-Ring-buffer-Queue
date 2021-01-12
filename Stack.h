#pragma once
#ifndef H_STACK_B71
#define H_STACK_B71

/// @brief ����
struct Stack
{
	int* Data;					//< ��������� �� ������
	const int GrowthFactor = 2; //< ��������� ��� ���������� ����������� �������
	int Length   = 0;			//< ����� �����
	int Capacity = 4;			//< ����������� �����
};

/// @brief ����������� ����
/// 
/// @param stack ������������� ����
void ResizeArray(Stack* stack);	/// @todo Resize

/// @brief ������������� �����
/// 
/// @param stack ���������������� ����
void StackInit(Stack* stack);	/// @todo InitStack

/// @brief �������� �� �������
/// 
/// @param stack ����, ������� ���������
/// 
/// @retval true	��� ������
/// @retval false	��� ��������
/// 
/// @return false
bool IsEmpty(Stack* stack);

/// @brief �������� ������� � ����
/// 
/// @param data		�������� ������������ ��������
/// @param stack	����, � ������� �������� ��������
void Push(int data, Stack* stack);

/// @brief �������� ������ �������
/// 
/// @param stack ����, �� �������� ��������� ������
/// 
/// @return �������� ���������� ��������
int Pop(Stack* stack);

/// @brief �������� ������ ������� �� ������ ���
/// 
/// @param stack ����, � ������� ��������
/// 
/// @return �������� ���������� ��������
int GetTop(Stack* stack);

/// @brief �������� ������ ������������ �����
/// 
/// @param stack ����, � ������� �������� 
/// 
/// @return �������� ������ �����
int GetLength(Stack* stack);
#endif
