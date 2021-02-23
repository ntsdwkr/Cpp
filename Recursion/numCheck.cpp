// check number recursively
#include <iostream>
using namespace std;

bool check(int a[],int s,int n){
    if(s==0) return false;
    if(a[s-1]==n) return true; // checking from last element
    check(a,s-1,n);
}

int main()
{
    int a[]={4,5,0,10,8};
    int tar = 0;
    int size = 5;
    cout<<check(a,size,tar);
    return 0;
}
