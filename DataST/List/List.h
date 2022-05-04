#pragma once
#include<iostream>
typedef struct _Node
{
	int iData;
	_Node* pNextNode;
};
typedef struct _List
{
	int iCount;
	_Node* HeadNode;
}_List;

void Release(_Node* node);
void ReleaseList(_List* list);
void InitList(_List* list);
void PushBack(_List* list, const int Data);
void PushFront(_List* list, const int Data);