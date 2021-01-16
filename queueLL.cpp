//queue using Linked List

#include<iostream>
using namespace std;

template<typename T>
class node{
	public:
	T data;
	node<T> *next;
	node(){
		next = NULL;
	}
};

template<typename T>
class queue{
	int s = 0;
	node<T> *head = NULL;
	node<T> *tail = NULL;
	public:
	int size(){
		return s;
	}
	bool isEmpty(){
		return s==0;
	}
	T front(){ 
		if(s==0){
			cout<<"Empty queue! "<<endl;
			return -1;
		}
		return head->data;
	}
	void enqueue(T n){
		node<T> *temp = new node<T>(); 
		temp->data = n;
	    temp->next = NULL;
		if(s==0){
			head = temp;
			tail = temp;
			s++;
			return;
		}
		tail->next = temp;
		tail = temp;
		s++;
		
	}
	T dequeue(){
		if(isEmpty()){
			cout<<"Empty queue! "<<endl;
			return -1; 
		}
		T ans = head->data;
		head = head->next;
		s--; 
		return ans;
	}
};

int main(){
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
