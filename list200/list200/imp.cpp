#include<iostream>
#include"listType.h"
#include"extendedList.h"
using namespace std; 



ListType::ListType()
{
	this->count = 0; 
}
void ListType::addToPosition(int ele, int pos)
{
	if (!isFull())
	{
		for (int i = count; i > pos; i--)
		{
			this->list[i] = this->list[i - 1]; 
		}
		this->list[pos] = ele; 
	}
	else
	{
		cout << "List is Full " << endl; 
	}
}
void ListType::deleteFromPosition(int pos)
{
	if (!isEmpty())
	{
		for (int i = pos; i < count; i++)
		{
			this->list[i] = this->list[i + 1]; 
		}
		count--; 
	}
}
bool ListType::isEmpty()const
{
	return this->count == 0; 
}
bool ListType::isFull()const
{
	return this->count == SIZE; 
}
void ListType::print() const
{
	if (!isEmpty())
	{
		for (int i = 0; i < this->count; i++)
		{
			cout << this->list[i] << " "; 
		}
		cout << endl; 
	}
	else
	{
		cout << "list is empty" << endl; 
	}
}

int ListType::search(int ele)const
{
	if (!isEmpty())
	{
		for (int i = 0; i < this->count; i++)
		{
			if (this->list[i] == ele)
			{
				return i;
			}
		}return -1; 
	}
	else
	{
		cout << "list is empty" << endl; 
	}

}

int ListType::getCount()const
{
	return this->count; 
}



void ExtendedList::addToFirst(int ele)
{
	if (!isFull())
	{
		for (int i = count; i > 0; i--)
		{
			this->list[i] = this->list[i - 1]; 
		}
		this->list[0] = ele; 
		count++; 
	}
	else
	{
		cout << "List is Full" << endl; 
	}
}

void ExtendedList::addToLast(int ele)
{
	if (!isFull())
	{
		this->list[count] = ele; 
		count++; 
	}
	else
	{
		cout << "list is full" << endl; 
	}
}

void ExtendedList::addBeforeElement(int ele, int bEle)
{
	if (!isFull())
	{
		int before_ele_index = this->search(bEle); 
		if (before_ele_index != -1)
		{
			for (int i = count; i > before_ele_index; i--)
			{
				this->list[i] = this->list[i - 1]; 
			}
			int index_to_insert = before_ele_index; 
			this->list[index_to_insert] = ele;
			count++; 
		}
		else
		{
			cout << "element you want to insert before dose not exist" << endl; 
		}
	}
	else
	{
		cout << "list is full" << endl;
	}
}

void ExtendedList::deleteFirst()
{
	if (!isEmpty())
	{
		for (int i = 0; i < count; i++)
		{
			this->list[i] = this->list[i + 1];

		}count--;

	}
	else
	{
		cout << "List is Empty" << endl; 
	}
	
}


void ExtendedList::deleteLast()
{
	if (!isEmpty())
	{
		count--; 
	}
	else
	{
		cout << "List is Empty" << endl; 
	}
}


void ExtendedList::deleteElement(int ele)
{
	if (!isEmpty())
	{
		int ele_index = this->search(ele);
		if (ele_index != -1)
		{
			for (int i = ele_index; i < count; i++)
			{
				this->list[i] = this->list[i + 1];
			}count--;
		}
		else
		{
			cout << "ele dose not exist" << endl; 
		}

	}
	else
	{
		cout << "list is empty" << endl; 
	}
}


int ExtendedList::searchSorted(int e)const {

	int pos = count;
	if (!isEmpty())
	{
		
		for (int i = 0; i < count; i++)
		{
			if (list[i] >= e)
			{
				return i; 
			}
		}
	}
	else
		cout << "the list is empty " << endl; 
	return pos; 

}


void ExtendedList::addSorted(int e)
{
	if (!isFull())
	{
		this->addToPosition(e, this->searchSorted(e)); 
	}
	else
	{
		cout << "List is Full" << endl; 
	}
}




