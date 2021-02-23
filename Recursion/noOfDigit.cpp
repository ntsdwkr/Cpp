// no of digit using recursion
#include <iostream>
using namespace std;

/* int num(int n, int c){
    int d=n/10;
    c++;
    if(d==0){
        return c;
    }
    num(d,c);
}

int main() {
	int n;
	int x=0;
	cin>>n;
	cout<<num(n,x);
	return 0;
} */

int num(int n, int c){
    int d=n/10;
    c++;
    if(d==0){
        return c;
    }
    num(d,c);
}

int num(int n){
    return num(n,0); // function overloading
}

int main() {
	int n;
	cin>>n;
	cout<<num(n);
	return 0;
}
