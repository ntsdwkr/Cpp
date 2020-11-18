//2D array sorting 
#include<iostream>
using namespace std;

void PrintArr(int **a,int n,int d){
    for(int i=0;i<n;i++){
        for(int j=0;j<d;j++){
         cout<<a[i][j]<<" ";
        }
    } 

}
void arrSort(int **a,int n){
    int *temp;
    for(int i=0;i<n;i++){ 
        for(int j=i+1;j<n;j++){
            if(*a[i]>*a[j]){ 
                *temp=*a[i];
                *a[i]=*a[j];
                *a[j]=*temp;
            } 
            
        }
    } 
}

int main(){
    int n;
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
        int d=x[i];
        arrSort(&a[i],d);   
 
    }
    for(int i=0;i<n;i++){
     PrintArr(&a[i],n,x[i]);
    }
    return 0;
} 
