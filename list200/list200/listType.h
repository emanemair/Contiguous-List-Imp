#pragma once
using namespace std;

const int SIZE = 10;
enum ErrorCode { Sucessful, underFlow, OverFlow, Duplicate, notFound, invalidPos };
template <class type>
class List {
protected:
	type list[SIZE];
	int count;
public:
	List();
	~List();
	bool isEmpty();
	bool isFull();
	int getCount();
	int search(type ele);
	ErrorCode addToPosition(type ele, int pos);
	ErrorCode print();
	ErrorCode deleteFromPosition(int pos);


};
