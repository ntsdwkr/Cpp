// first index
#include <iostream>
using namespace std;

int check(int a[], int s, int n, int i){
    if(i>=s-1) return -1;
    if(a[i]==n) return i;
    check(a,s,n,i+1);
}

int check(int a[],int s, int n){
    return check(a,s,n,0); // 0 is index i
}

int main() {
	int a[]={0,1,2,10,3,4,10};
	int s = sizeof(a)/sizeof(a[0]);
	cout<<check(a,s,10);
	return 0;
}
