//LinearSearch
#include<iostream>
using namespace std;
void PrintArr(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

void LinearSearch(int *a,int n,int num){
    int temp=-1;
    for(int i=0;i<n;i++){
        if(a[i]==num){
            cout<<"the number found at position: "<<i+1<<endl;
            temp=0;
        }
        
    }
    if(temp==-1){
        cout<<"number not found ! "<<endl;
    }

}


int main(){
    int n,num;
    cout<<"enter size of an array: ";
    cin>>n;
    int *p = new int[n];
    for(int i=0;i<n;i++){
        cout<<"enter array element: ";
        cin>>p[i];
    }
    PrintArr(p,n);
    cout<<"\nenter the no you want to search: "; 
    cin>>num;
    LinearSearch(p,n,num); 

    return 0;
}
