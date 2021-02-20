// sum of arr elements using recursion
#include <iostream>
using namespace std;

int sum(int a[],int n){
    if(n==0) return a[n];
    return a[n] + sum(a,n-1);
}    

int main() {
   /* int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    cout<<sum(a,x-1);
    */
    
  int a[]={5,1,25,3,4};
	int s = sizeof(a)/sizeof(a[0]);
	cout<<s<<endl;
	cout<<sum(a,s-1);
	
	return 0;
}
