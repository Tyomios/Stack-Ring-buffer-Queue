#pragma once
#ifndef __H_RINGBUFFER__F64
#define __H_RINGBUFFER__F64

/// @brief ��������� �����
struct RingBuffer
{
	int* Data;				//< ��������� �� ������
	int IndexIn		 = 0;	//< ������ ������������ ��������
	int IndexOut	 = 0;	//< ������ ���������� ��������
	int Lenght		 = 8;	//< ����� ������
	int OcupiedSpace = 0;	//< ������� ������������
	int FullSize	 = 0;	//< ������ ������ ��� ������������ 
							//	�������� ��� ����������
};

/// @brief ������� ������������� ���������� ������
/// 
/// @param ringBuffer ���������������� �����
/// 
/// @return ������������������ �����
int* InitBuffer(RingBuffer* ringBuffer);

/// @brief �������� �������� � �����
/// 
/// @param data		   �������� ������������ ��������
/// @param ringBuffer  �����, � ������� ����������� ��������
void Push(int data, RingBuffer* ringBuffer);

/// @brief �������� ����� ������ ������� �� ������
/// 
/// @param ringBuffer �����, �� �������� ����������� ��������
/// 
/// @return �������� ��������
int Pop(RingBuffer* ringBuffer);

/// @brief ���������� ������ ������� �� ������� ���������� ��������
/// 
/// @param ringBuffer �����, � ������� ��������
/// 
/// @return ���������� ������ ��������, ������� �������� 
///			��� ������������� Pop()
int GetTop(RingBuffer* ringBuffer);
#endif