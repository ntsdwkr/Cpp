// change combination of INR 
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a,int b){
    return a<=b;
}

int main() {
    int c[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(c)/sizeof(c[0]);
    int money;
    cin>>money;
    while(money>0){
    auto lb=lower_bound(c,c+n,money,cmp);
    auto i =lb-c-1;
    int m = c[i];
    cout<<m<<" ";
    money = money-m;
    }
    
	return 0;
}
