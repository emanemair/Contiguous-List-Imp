#pragma once

using namespace std; 

const int SIZE = 100; 
class ListType {
protected : 
	int list[SIZE];
	int count; 
public: 
	ListType(); 
	void addToPosition(int ele, int pos); 
	void deleteFromPosition(int pos); 
	bool isEmpty()const; 
	bool isFull()const; 
	void print() const; 
	int search(int ele)const; 
	int getCount()const; 
};