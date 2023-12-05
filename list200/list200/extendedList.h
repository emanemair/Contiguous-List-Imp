#pragma once
#include"listType.h"

using namespace std;

template <class type>
class ListPlus : public List<type>
{
	ErrorCode addToFirst(type ele);
	ErrorCode addToLast(type ele);
	ErrorCode addBeforeElement(type ele, type value);
	ErrorCode addElement(type ele);
	ErrorCode deleteFirst();
	ErrorCode deleteLast();
	ErrorCode deleteElement(type ele);
	int searchSorted(type ele);
	ErrorCode addSorted(type ele);



};
