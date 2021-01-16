//BinarySearch
#include<iostream>
using namespace std;
void PrintArr(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

void BinarySearch(int *a,int n,int num){
    int temp=-1;
    int Left=0;
    int Right=n;
    int Mid=Left+(Right-Left)/2; 
    while(Left<=Right){
        if(a[Mid]==num){ 
            cout<<"the number found at position: "<<Mid+1<<endl;
            temp=0;
            break;
        }
        
        else if(a[Mid]<num){
            Left=Mid+1;  
            Mid=Left+(Right-Left)/2;    
        }  
        else{
            Right=Mid-1; 
            Mid=Left+(Right-Left)/2;     
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
    BinarySearch(p,n,num); 
    delete[] p;

    return 0; 
}
