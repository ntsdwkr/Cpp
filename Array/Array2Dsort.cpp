//2D array sorting 
#include<iostream>
using namespace std;


void arrSort(int *a,int n){
    int temp;
    for(int i=0;i<n;i++){ 
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){ 
                temp=a[i];
                a[i]=a[j]; 
                a[j]=temp; 
            }  
            
        }
    } 
}


int main(){
    int n;
    int m;
    int &arrSize=m;
    cout<<"enter no of arr you want: ";
    cin>>n;
    int a[n][m];
    int x[n];
    //int *p =&x[0];
    for(int i=0;i<n;i++){
        int arrSize;
        cout<<"enter arrSize: ";
        cin>>arrSize;
        x[i]=arrSize;
        //*(p+i)=arrSize;
        for(int j=0;j<arrSize;j++){
            cout<<"enter arr elements: ";   
            cin>>a[i][j];
        }
        
    } 
    for(int i=0;i<n;i++){
        arrSort(a[i],x[i]);    
 
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<x[i];j++){  
         cout<<a[i][j]<<" ";
        }
        cout<<endl;  
    }
    return 0;
}  
