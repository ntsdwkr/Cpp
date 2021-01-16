//stack using linked list
#include <iostream>
using namespace std;

template <typename T>
class node
{
public:
	T data;
	node<T> *next;
	node<T>()
	{
		data = 0;
		next = NULL;
	}
};

template <typename T>
class stack
{
	int s = 0;
	node<T> *head = NULL;

public:
	int size()
	{
		return s;
	}
	bool isEmpty()
	{
		return s == 0;
	}
	T top()
	{
		if (head == NULL)
		{
			cout << "Empty Stack! ";
			return 0;
		}
		return head->data;
	}
	void push(T element)
	{
		node<T> *temp = new node<T>();
		temp->data = element;
		temp->next = head;
		head = temp;
		s++;
	}
	T pop()
	{
		if (s == 0)
		{
			cout << "Empty Stack! " << endl;
			return 0;
		}
		T ans = head->data;
		head = head->next;
		s--;
		return ans;
	}
};

int main()
{
	stack<int> s;
	cout << s.size() << endl;
	cout << s.isEmpty() << endl;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.top() << endl;
	cout << s.size() << endl;
	cout << s.isEmpty() << endl;
	s.push(40);
	cout << s.top() << endl;
	cout << s.size() << endl;
	cout << s.pop() << endl;
	cout << s.top() << endl;
	cout << s.size() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	return 0;
}
