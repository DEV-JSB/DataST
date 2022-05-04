#pragma once
#include<iostream>

typedef struct Dynamic
{
	int iMaxCount;
	int iCount;
	int* pInt;
}Arr;

void InitArr(Arr* arr);
void PushBack(Arr* arr, int Data);
void Reallocate(Arr* arr);
