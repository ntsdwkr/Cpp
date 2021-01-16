// stack implementation using template class and Array
#include <iostream>
#include <climits>
using namespace std;

template <typename T>

class stackArr
{
	T *arr;
	int nI;
	int s; // for size of stack

public:
	// stack creation
	stackArr()
	{
		arr = new T[5];
		s = 5;
		nI = 0;
	}
	int size()
	{
		cout << "size of stack is : " << nI << endl;
		return nI;
	}
	bool isEmpty()
	{
		if (nI == 0)
			cout << "stack is empty " << endl;
		else
			cout << "stack is not empty " << endl;
		return nI == 0;
	}
	T top()
	{
		if (nI == 0)
		{
			cout << "stack is empty " << endl;
			return 0;
		}
		cout << "top element is at " << (nI) << " th position and element is " << arr[nI - 1] << endl;
		return arr[nI - 1];
	}
	void push(T n)
	{
		if (nI == s)
		{
			T *NEWarr = new T[2 * s];
			for (int i = 0; i < s; i++)
			{
				NEWarr[i] = arr[i];
			}
			arr = NEWarr;
			s *= 2;
		}
		arr[nI] = n;
		nI++;
	}
	T pop()
	{
		if (nI == 0)
		{
			cout << "stack is empty " << endl;
			return 0;
		}
		nI--;
		cout << "poped element is : " << arr[nI] << endl;
		return arr[nI];
	}
};

int main()
{
	stackArr<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.top();
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	s.size();
	s.isEmpty();
	s.top();
	s.pop();
	s.top();
	s.size();
	s.pop();
	s.top();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.size();

	return 0;
}
