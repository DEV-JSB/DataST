#include "List.h"

void ReleaseList(_List* list)
{
	Release(list->HeadNode);
}

void Release(_Node* node)
{
	if (node == nullptr)
		return;
	Release(node->pNextNode);
	free(node);
}

void InitList(_List* list)
{
	list->HeadNode = nullptr;
	list->iCount = 0;
}

void PushFront(_List* list, const int Data)
{
	_Node* NewNode = (_Node*)malloc(sizeof(_Node));
	NewNode->iData = Data;
	NewNode->pNextNode = list->HeadNode;
	
	list->HeadNode = NewNode;
	++list->iCount;
}

void PushBack(_List* list, const int Data)
{
	_Node* NewNode = (_Node*)malloc(sizeof(_Node));
	NewNode->iData = Data;
	NewNode->pNextNode = nullptr;
	if (list->HeadNode == nullptr)
	{
		list->HeadNode = NewNode;
		++list->iCount;
		return;
	}
	_Node* tmp = list->HeadNode;
	while (!(tmp->pNextNode == nullptr))
	{
		tmp = tmp->pNextNode;
	}
	tmp->pNextNode = NewNode;
	++list->iCount;
}


