#pragma once
#include "Library.h"

template <typename type>
class Stack
{
public:
	Stack();
	Stack(type * arr);
	Stack(const Stack<type> & obj);
	virtual ~Stack();

	type & top();
	void push(type elms);
	void pop(); // delete the last element
	size_t size();
	bool empty();
	//template <typename type>
	void operator[](type elms);
	void operator = (type elms);
private:
	type *els;
	size_t length;
	size_t buf_size;
};


