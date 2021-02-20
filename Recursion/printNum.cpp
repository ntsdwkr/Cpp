// print numbers upto n using recursion
#include <iostream>
using namespace std;

void num(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    num(n-1);
    cout<<n<<" ";
}

int main() {
	int n;
	cin>>n;
	num(n);
	return 0;
}
