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
    int n,i;
    cout<<"enter no of arr you want: ";
    cin>>n;
    int **a=new int*[n];
    int *x=new int[n];
    for(int i=0;i<n;i++){
        int arrSize;
        cout<<"enter arrSize: ";
        cin>>arrSize; 
        x[i]= arrSize;
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
    for(int j=0;j<*a[i];j++){  
         delete [] a[j];
    }
    delete [] a;
    delete [] x;
    return 0;
}
