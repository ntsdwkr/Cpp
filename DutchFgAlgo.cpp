#include<iostream>
using namespace std;

void sort(int a[], int n)
{
    int l=0,m=0,h=n-1;
    while(m<=h){
        int x = a[m];
        if(x==0){
            swap(a[l],a[m]);
            l++;
            m++;
        }
        else if(x==1){
        m++;
        }
        else{
            swap(a[m],a[h]);
            h--;
        }
    }
}

int main(){
int a[]={1,2,0,0,1,0,1,1,2};
int s=sizeof(a)/sizeof(a[0]);
sort(a,s);
for(int i=0;i<s;i++){
   cout<<a[i]<<" ";
}
return 0;
}
