#include"listPlus.h"
#include"listType.h"
#include<iostream>

using namespace std;

template <class type>
List<type>::List()
{
	count = 0;
}

template <class type>
List<type>::~List()
{
	cout << "This List will be deleted" << endl;
	for (int i = count - 1; i >= 0; i--)
	{
		deleteFromPosition(i);
	}
}


template<class type>
ErrorCode List<type>::addToPosition(type ele, int pos)
{
	if (!isFull())
	{
		if (pos >= 0 && pos <= count)
		{
			int ele_index = search(ele);
			if (ele_index != -1)
			{
				for (int i = count; i > pos; i--)
				{
					list[i] = list[i - 1];
				}list[pos] = ele;
				count++;
				return Sucessful;
			}
			else Duplicate;
		}
		else invalidPos;
	}
	else OverFlow;
}


template<class type>
ErrorCode List<type>::deleteFromPosition(int pos)
{
	if (!isEmpty())
	{
		if (pos >= 0 && pos < count)
		{
			for (int i = pos; i < count; i++)
			{
				list[i] = list[i + 1];
			}
			count--;
		}return invalidPos;
	}return underFlow;
}

template<class type>
int List<type>::getCount()
{
	return count;
}



template<class type>
bool List<type>::isEmpty()
{
	return count == 0;
}

template<class type>
bool List<type> ::isFull()
{
	return count == SIZE;
}

template<class type>
ErrorCode List<type>::print()
{
	if (!isEmpty())
	{
		for (int i = 0; i < count; i++)
		{
			cout << list[i] << " ";
		}cout << endl;
	}return underFlow;
}
template<class type>
int List<type>::search(type ele)
{
	int pos = -1;
	if (!isEmpty())
	{
		for (int i = 0; i < count; i++)
		{
			if (list[i] == ele)
			{
				return i;
			}
		}
	}
	else
		cout << "under flow , this list is empty " << endl;
	return -1;
}


template<class type>
ErrorCode ListPlus<type> ::addToFirst(type ele)
{
	if (!isFull())
	{
		int index = search(ele);
		if (index == -1)
		{
			addToPosition(ele, 0);

		}return Duplicate;

	}return OverFlow;
}


template<class type>
ErrorCode ListPlus<type>::addToLast(type ele)
{
	if (!isFull())
	{
		int index = search(ele);
		if (index == -1)
		{
			addToPosition(ele, count);
		}
		else return Duplicate;
	}return OverFlow;
}


template<class type>
ErrorCode ListPlus<type>::deleteFirst()
{
	if (!isEmpty())
	{
		deleteFromPosition(0);

	}return underFlow;
}

template<class type>
ErrorCode ListPlus<type>::addElement(type ele)
{
	if (!isFull())
	{
		int index = search(ele);
		if (index == -1)
		{
			int pos;
			cout << "in what position you want to add element : " << e << " ?  pos : " << 0 << " - " << count << endl;
			cin >> pos;
			while (pos < 0 | pos > count)
			{
				cout << "Please enter a valid position " << 0 << " _  " << count << endl;
			}
			addToPosition(ele, pos);

		}
		else return Duplicate;
	}return OverFlow;
}
template<class type >
ErrorCode ListPlus<type>::addBeforeElement(type ele, type value)
{
	if (!isFull())
	{
		int ele_index = search(ele);
		if (ele_index == -1)
		{
			int value_index = search(value);
			if (value_index != -1)
			{
				addToPosition(ele, value_index);
				return Sucessful;
			}
			else return notFound;

		}
		else return Duplicate;
	}
	else return OverFlow;
}

template<class type>
ErrorCode ListPlus<type>::deleteLast()
{
	if (!isEmpty())
	{
		count--;
		return Sucessful;

	}return underFlow;
}
template<class type>
ErrorCode ListPlus<type>::deleteElement(type ele)
{
	if (!isEmpty())
	{
		int index = search(ele);
		if (index != -1)
		{
			deleteFromPosition(ele, index);
			return Sucessful;
		}return notFound;

	}return underFlow;
}

template<class type>
int ListPlus<type> ::searchSorted(type ele)
{
	if (!isEmpty())
	{
		int index = search(ele);
		if (index != -1)
		{
			for (int i = 0; i < count; i++)
			{
				if (list[i] = > ele)
				{
					return i;
				}
			}
		}
		else return notFound;
	}
	else return underFlow;
}

template <class type>
ErrorCode ListPlus<type>::addSorted(type ele)
{
	if (!isFull())
	{
		int index = search(ele);
		if (index == -1)
		{
			addToPosition(ele, searchSorted(ele));
			return Sucessful
		}
		else return Duplicate;

	}return OverFlow;
}






