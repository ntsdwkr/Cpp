// queue using Array

#include <iostream>
using namespace std;

template <typename T>
class queue
{
	int firstI, nextI, s, cap;
	T *arr;

public:
	queue()
	{
		arr = new T[5];
		firstI = -1;
		nextI = 0;
		cap = 5;
		s = 0;
	}
	int size()
	{
		return s;
	}
	bool isEmpty()
	{
		return (s == 0);
	}
	T front()
	{
		if (isEmpty())
		{
			cout << "Empty queue! " << endl;
			return -1;
		}
		return arr[firstI];
	}
	void enqueue(T n)
	{
		if (firstI == -1)
		{
			arr[nextI] = n;
			firstI++;
			nextI++;
			s++;
			return;
		}
		if (s == cap)
		{
			T *newArr = new T[2 * cap];
			int j = 0;
			for (int i = firstI; i < cap; i++)
			{
				newArr[j] = arr[i];
				j++;
			}
			for (int i = 0; i < firstI; i++)
			{
				newArr[j] = arr[i];
			}
			delete[] arr;
			arr = newArr;
			cap *= 2;
			firstI = 0;
			arr[nextI] = n;
			nextI = (nextI + 1) % cap;
			s++;
			return;
		}
		arr[nextI] = n;
		nextI = (nextI + 1) % cap;
		s++;
	}
	T dequeue()
	{
		if (s == 0)
		{
			cout << "Empty queue! " << endl;
			firstI = -1;
			nextI = 0;
			return -1;
		}
		T ans = arr[firstI];
		firstI = (firstI + 1) % cap;
		s--;
		return ans;
	}
};

int main()
{
	queue<int> n;
	cout << n.isEmpty() << endl;
	n.enqueue(10);
	n.enqueue(20);
	n.enqueue(30);
	cout << n.size() << endl;
	cout << n.front() << endl;
	cout << n.dequeue() << endl;
	cout << n.dequeue() << endl;
	cout << n.dequeue() << endl;
	cout << n.dequeue() << endl;
	cout << n.dequeue() << endl;
	cout << n.size() << endl;
	n.enqueue(40);
	n.enqueue(50);
	n.enqueue(60);
	cout << n.size() << endl;
	cout << n.dequeue() << endl;
	n.enqueue(70);
	n.enqueue(80);
	n.enqueue(90);
	cout << n.size() << endl;
	cout << n.front() << endl;
	cout << n.dequeue() << endl;
	cout << n.isEmpty() << endl;

	return 0;
}
