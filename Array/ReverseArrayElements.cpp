//Reverse an array
#include<iostream>
using namespace std;

void reverseArr(int *x,int s){
    int temp[s];
    int l=0;//satrt
    int m=s-1;//end 
    while(l<s){
        temp[l]=x[m];
        l++;
        m--; 
    } 
    for(int i=0;i<s;i++){ 
        x[i]=temp[i];
    }
    
}

void Print(int *a,int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int i,n; 
    cout<<"enter size of array: ";
    cin>>n;//size of an array
    int a[n]; 
    for(i=0;i<n;i++){
        cout<<"enter array elements: ";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverseArr(a,n); 
    Print(a,n);

    return 0;
}
