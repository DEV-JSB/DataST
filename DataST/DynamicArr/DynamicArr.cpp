#include "DynamicArr.h"

void InitArr(Arr* arr)
{
	arr->iCount = 0;
	arr->iMaxCount = 2;
	arr->pInt = (int*)malloc(sizeof(int) * 2);
}

void PushBack(Arr* arr, int Data)
{
	if (arr->iMaxCount <= arr->iCount)
		Reallocate(arr);
	arr->pInt[arr->iCount++] = Data;
}

void ReleaseArr(Arr* arr)
{
	arr->iCount = 0;
	arr->iMaxCount = 0;
	free(arr->pInt);
}


void Reallocate(Arr* arr)
{
	int Resize = arr->iMaxCount * 2;
	int* pNew = (int*)malloc(sizeof(int) * Resize);
	
	for (int i = 0; i < arr->iCount; ++i)
	{
		pNew[i] = arr->pInt[i];
	}

	free(arr->pInt);
	arr->pInt = pNew;
	arr->iMaxCount = Resize;
}
