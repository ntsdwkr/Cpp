// last index
#include <iostream>
using namespace std;

int check(int a[], int s, int n){
    if(s==0) return -1;
    if(a[s-1]==n) return s-1;
    check(a,s-1,n);
}

int main() {
	int a[]={0,1,2,10,3,4,10,2,11};
	int s = sizeof(a)/sizeof(a[0]);
	int num = 2;
	cout<<check(a,s,num);
	return 0;
}
