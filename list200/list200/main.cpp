#include<iostream>
#include"extendedList.h"
#include"listType.h"
using namespace std; 




int main()
{
	ExtendedList list; 
	for (int i = 0; i < 5; i++)
	{
		list.addToLast(i * 2); 
	}
	list.print(); 
	list.addBeforeElement(1, 2); 
	list.print(); 
	list.deleteFirst(); 
	list.deleteLast(); 
	list.print(); 
	list.deleteFromPosition(2); 
	list.deleteElement(6);
	list.print(); 
	return 0; 
}
