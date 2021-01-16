//Arrange array according to positive and negative
#include<iostream>
using namespace std;
void arange(int *a,int n){
    int t;
    int c=0;
    for(int i=1;i<n;i++){
        if(a[i]<0){ 
            int x;
            t=a[c];
            a[c]=a[i];
            x=i;
            while(c<i){ 
                a[i]=a[i-1];   
                i--;
            }
            a[i+1]=t;   
            i=x; 
            c++; 
        }
        
    }

}

void printArr(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"enter size of an array: ";
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cout<<"enter array element: ";
        cin>>a[i];
    }
    printArr(a,n);  
    arange(a,n); 
    printArr(a,n);  

    return 0;
}
