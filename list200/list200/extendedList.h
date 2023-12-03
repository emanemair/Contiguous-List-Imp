#pragma once
#include"listType.h"
using namespace std; 








class ExtendedList : public ListType
{
public : 
	void addToFirst(int ele);
	void addToLast(int ele); 
	void addBeforeElement(int ele , int bEle); 
	void deleteFirst(); 
	void deleteLast(); 
	void deleteElement(int e);
	int searchSorted(int ele) const; // return the correct pos for the element if the list was sorted  
	void addSorted(int ele); // add element to a sorted list 
};
