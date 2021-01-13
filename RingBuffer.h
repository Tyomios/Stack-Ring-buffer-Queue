#pragma once
#ifndef __H_RINGBUFFER__F64
#define __H_RINGBUFFER__F64

/// @brief Кольцевой буфер
struct RingBuffer
{
	int* Data;			//< Указатель на массив
	int IndexIn		 = 0;	//< Индекс добавляемого элемента
	int IndexOut	 	 = 0;	//< Индекс удаляемого элемента
	int Lenght		 = 8;	//< Длина буфера
	int OcupiedSpace 	 = 0;	//< Занятое пространство
	int FullSize	 	 = 0;	//< Полный размер для переключения 
						//	индексов при перезаписи
};

/// @brief Функция инициализации кольцевого буфера
/// 
/// @param ringBuffer Инициализируемый буфер
/// 
/// @return Инициализированный буфер
int* InitBuffer(RingBuffer* ringBuffer);

/// @brief Положить значение в буфер
/// 
/// @param data		   Значение вставляемого элемента
/// @param ringBuffer  Буфер, в который добавляется значение
void Push(int data, RingBuffer* ringBuffer);

/// @brief Вытащить самый старый элемент из буфера
/// 
/// @param ringBuffer Буфер, из которого извлекается значение
/// 
/// @return Значение элемента
int Pop(RingBuffer* ringBuffer);

/// @brief Возвращает индекс первого на очереди удаляемого элемента
/// 
/// @param ringBuffer Буфер, в котором работаем
/// 
/// @return Возвращает индекс элемента, который удалится 
///			при использовании Pop()
int GetTop(RingBuffer* ringBuffer);
#endif
