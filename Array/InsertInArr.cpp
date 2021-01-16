//inserting element in array at the end
#include<iostream>
using namespace std;

void insert(int *a,int &n,int *b,int &s,int x){
    int i;
    for(i=0;i<n;i++){
        b[i]=a[i];  // copy in b 
    }
    b[i]=x;
}

void printArr(int *a,int n){
    cout<<"arr elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=n+1;
    int b[s];
    cout<<"enter element you want to insert : ";
    int x;
    cin>>x;
    insert(a,n,b,s,x);
    printArr(a,n);
    printArr(b,s);


    return 0;
}
