// last index
#include <iostream>
using namespace std;

void check(int a[], int s, int n, int i){
    if(i>=s) return;
    if(a[i]==n) cout<< i <<" ";
    check(a,s,n,i+1);
}

void check(int a[], int s, int n){
    return check(a,s,n,0); // function overload
}

int main() {
	int a[]={0,1,2,10,3,2,10,2,11};
	int s = sizeof(a)/sizeof(a[0]);
	int num = 2;
	check(a,s,num);
	return 0;
}
