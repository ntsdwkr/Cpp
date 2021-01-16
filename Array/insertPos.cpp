//insert element in array at certain position
#include<iostream>
using namespace std;

void printArr(int *a,int n){
    cout<<"arr elements are : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void insert(int a[], int n, int b[], int m, int data, int pos){
    int index=pos-1,i,j;
    for(i=0;i<index;i++){
        b[i]=a[i];
    }
    b[i]=data;
    for(i=pos-1,j=pos;i<n,j<m;i++,j++){
        b[j]=a[i];
    }
}

int main(){
    int a[10]={4,0,3,-9,5,7,-4,8,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    int m=n+1;
    int b[m];
    int data=99;
    int pos=6;
    insert(a,n,b,m,data,pos); 
    printArr(a,n);
    printArr(b,m);

    return 0;
}
