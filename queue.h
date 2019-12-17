//This is written by Mustafa Hesham Mohamed.
//My code at FSSR is 20180378.
//This is the queue.h file.
#ifndef QUEUE_H
#define QUEUE_H

template <class T>
class queue
{
	typedef queue* qptr;
	private:
		
		T value;
		qptr front;
		qptr rear;
		qptr next;
		
	public:
		
		queue();
		enqueue(T t);
		dequeue();
		bool qIsEmpty() const;
		
	protected:
};

#endif
