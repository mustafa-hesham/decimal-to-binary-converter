//This is written by Mustafa Hesham Mohamed.
//My code at FSSR is 20180378.
//This is the stack.cpp file.

#include "stack.h"
#include <iostream>
#include <string>

using namespace std;

template <class D>
stack<D>::stack()
{
	top = NULL;
}


template <class D>
bool stack<D>::topIsNull() const
{
	return (top == NULL);
}
	
template <class D>
bool stack<D>::isEmpty() const
{
	return topIsNull();
}


template <class D>
stack<D>::push(D d)
{
	sptr temp = new stack<D>();
	temp->data = d;
	temp->next = top;
	top = temp;
}

template <class D>
stack<D>::pop()
{
	D xt;
	sptr temp;
	if (isEmpty()) cout<<"Stack is empty!"<<endl;
	else
	{
		xt = top->data;
		temp = top;
		top = top->next;
		delete temp;
		cout<<xt;
	}
}
