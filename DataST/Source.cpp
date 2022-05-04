#include"List.h"

void main()
{
	// ∫Ø∞Ê¡° __
	_List Test = {};

	InitList(&Test);
	PushBack(&Test, 10);
	PushBack(&Test, 20);
	PushBack(&Test, 30);
	PushBack(&Test, 40);
	PushBack(&Test, 50);
	PushBack(&Test, 60);
	PushFront(&Test, 9);
	PushFront(&Test, 8);
	PushFront(&Test, 7);
	PushFront(&Test, 6);
	PushFront(&Test, 5);
	PushFront(&Test, 4);
	PushFront(&Test, 0);

	ReleaseList(&Test);

}