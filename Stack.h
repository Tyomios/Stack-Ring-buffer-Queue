#pragma once
#ifndef H_STACK_B71
#define H_STACK_B71

/// @brief Стэк
struct Stack
{
	int* Data;			//< Указатель на массив
	const int GrowthFactor 	= 2; 	//< Константа для увеличения вместимости массива
	int Length   		= 0;	//< Длина стэка
	int Capacity 		= 4;	//< Вместимость стэка
};

/// @brief Увеличивает стек
/// 
/// @param stack Увеличиваемый стэк
void ResizeArray(Stack* stack);

/// @brief Инициализация стека
/// 
/// @param stack инициализируемый стэк
void StackInit(Stack* stack);

/// @brief Проверка на пустоту
/// 
/// @param stack стэк, который проверяем
/// 
/// @retval true	Это пустой
/// @retval false	Это непустой
/// 
/// @return false
bool IsEmpty(Stack* stack);

/// @brief Положить элемент в стек
/// 
/// @param data		Значение вставляемого элемента
/// @param stack	Стэк, в который вносится значение
void Push(int data, Stack* stack);

/// @brief Вытащить первый элемент
/// 
/// @param stack Стэк, из которого извлекают данные
/// 
/// @return Значение последнего элемента
int Pop(Stack* stack);

/// @brief Вытащить первый элемент не удаляя его
/// 
/// @param stack Стэк, с которым работаем
/// 
/// @return Значение последнего элемента
int GetTop(Stack* stack);

/// @brief Получить размер заполненного стэка
/// 
/// @param stack Стэк, с которым работаем 
/// 
/// @return Значение длинны стека
int GetLength(Stack* stack);
#endif
