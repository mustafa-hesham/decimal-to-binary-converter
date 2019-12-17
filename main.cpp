//This is written by Mustafa Hesham Mohamed.
//My code at FSSR is 201800378.
//This is the main.cpp file.
//<---------------(REAL NUMBERS DEC->BIN CONVERTER)--------------->

#include <iostream>
#include <string>
#include "stack.cpp"
#include "queue.cpp"

using namespace std;

float decimalNum;
int integerPart;
float fractionPart;
const int limit = 10;
int count;

int main(int argc, char** argv) {
	
	cout<<"\t\tDecimal to binary converter of real numbers"<<endl;
	cout<<"\n\n";
	cout<<"Please enter a number to convert it to its binary representation: ";
	cin>>decimalNum;
	integerPart = decimalNum;
	fractionPart = decimalNum - integerPart;
	
	stack<int>* intNum = new stack<int>();
	queue<int>* fNum = new queue<int>();
	count = 0;
	while (integerPart != 0)
	{
		intNum->push(integerPart % 2);
		integerPart /= 2;
	}
	
	while (fractionPart != 0 && count < limit)
	{
		fractionPart *= 2;
		if (fractionPart >= 1)
		{
			fNum->enqueue(1);
			fractionPart -= 1;;
		}
		else if (fractionPart < 1)
		{
			fNum->enqueue(0);
		}
		count++;
	}
	
	cout<<"\n";
	while (!intNum->isEmpty())
	{
		intNum->pop();
	}
	cout<<".";//Placing the radix point between integer part and fraction part.
	while(!fNum->qIsEmpty())
	{
		fNum->dequeue();
	}
	
	return 0;
}
