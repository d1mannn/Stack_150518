#include "Stack.h"


template<typename type>
Stack<type>::Stack()
{
	els = nullptr; 
	length = 0;
	buf_size = 0;
}

template<typename type>
Stack<type>::Stack(type * arr, int n)
{
	//this->length = sizeof(arr) / sizeof(type); // узнать размерность массива не передавая его размер )
	this->length = n;
	this->els = new type[length];
	this->buf_size = length;
	for (int i = 0; i < length; i++)
		this->els[i] = arr[i];
}

template<typename type>
Stack<type>::Stack(const Stack<type> & obj)
{	
	this->length = obj.length;
	this->buf_size = obj.length;
	this->els = new type[length];
	for (int i = 0; i < length; i++)
		this->els[i] = obj.els[i];
}

template<typename type>
Stack<type>::~Stack()
{	
	delete[]els;
}

template<typename type>
type & Stack<type>::top() // возвращает последний элемент
{	
	return els[length - 1];
	// TODO: insert return statement here
}

template<typename type>
void Stack<type>::push(type elms)
{
	if (buf_size == 0)
	{
		buf_size = 2;
		els = new type[buf_size];
	}
		
	else if (buf_size <= length)
	{
		buf_size *= 2;
		type * temp = new type[buf_size];
		for (int i = 0; i < length; i++)
			temp[i] = els[i];
		delete[] els;
		els = temp;
	}
	els[length++] = elms;
		
}

template<typename type>
void Stack<type>::pop()
{	
	length--;
	/*type * temp = new type[length];
	for (int i = 0; i < length; i++)
	{
		temp[i] = els[i];
	}
	delete[]els;
	els = temp;*/
}

template<typename type>
size_t Stack<type>::size()
{
	return size_t(length);
}

template<typename type>
bool Stack<type>::empty()
{	
	return (size() == 0);
}

template<typename type>
void Stack<type>::operator[](type elms)
{
	if (buf_size == 0)
	{
		buf_size = 2;
		els = new type[buf_size];
	}
	else if (buf_size <= length)
	{
		buf_size *= 2;
		type * temp = new type[buf_size];
		for (int i = 0; i < length; i++)
		{
			temp[i] = els[i];
		}
		delete[] els;
		els = temp;
	}
	els[length++] = elms;
}

template<typename type>
void Stack<type>::operator=(type elms)
{
	els = elms;
}


