// is_short check using recursion
#include <iostream>
using namespace std;

bool check(int a[],int s){
    if(s==1||s==0) return true;
    if(a[0]>a[1]) return false;
    bool n = check(a+1,s-1);
    return n;
}

int main() {
	int a[]={0,1,2,10,3,4};
	int s = sizeof(a)/sizeof(a[0]);
	cout<<check(a,s);
	return 0;
}
