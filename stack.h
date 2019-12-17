//This is written by Mustafa Hesham Mohamed.
//My code at FSSR is 20180378.
//This is the stack.h file.

#ifndef STACK_H
#define STACK_H

template <class D>
class stack
{
	typedef stack* sptr;
	
	private:
		
		D data;
		sptr top;
		sptr next;
		
	public:
		
		stack();
		push(D d);
		pop();
		bool isEmpty() const;
		bool topIsNull() const;
		
	protected:
};

#endif
