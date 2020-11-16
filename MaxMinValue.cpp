//Max and Min elements of an array
#include<iostream>
using namespace std;

int max(int *a,int n){
    int m=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
    
}
int min(int *a,int n){
    int m=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    return m;

}
int main(){
    int i,n;
    cout<<"enter size of array: ";
    cin>>n; 
    int a[n]; 
    for(i=0;i<n;i++){
        cout<<"enter array element: "; 
        cin>>a[i];
    }
     for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"max: "<<max(a,n)<<endl;//max value 
    cout<<"min: "<<min(a,n)<<endl;//min value 
    return 0;
}
