//This is written by Mustafa Hesham Mohamed.
//My code at FSSR is 20180378.
//This is the queue.cpp file.
#include "queue.h"
#include <iostream>
#include <string>
using namespace std;

template <class T>
queue<T>::queue()
{
	front = NULL;
	rear = NULL;
}

template <class T>
bool queue<T>::qIsEmpty() const
{
	return (front == NULL);
}

template <class T>
queue<T>::enqueue(T t)
{
	qptr temp = new queue<T>();
	temp->value = t;
	if (qIsEmpty())
	{
		front = temp;
		front->next = NULL;
		rear = temp;
	}
	else if (!qIsEmpty())
	{
		rear->next = temp;
		rear = temp;
		rear->next = NULL;
	}
}

template <class T>
queue<T>::dequeue()
{
	qptr xtemp;
	T xd;
	if (qIsEmpty())
		{
			cout<<"The queue is Empty!"<<endl;
		}
	else if (!qIsEmpty())
		{
			xd = front->value;
			xtemp = front;
			front = front->next;
			delete xtemp;
			cout<<xd;
		}
}
