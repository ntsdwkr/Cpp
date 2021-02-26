// GP Sum
#include <iostream>
using namespace std;

float power(float m, int n){
    if(n==0) return 1;
    return m * power(m,n-1);
}

float sum(int n){
    if(n==0) return 1;
    return power(0.5,n) + sum(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
