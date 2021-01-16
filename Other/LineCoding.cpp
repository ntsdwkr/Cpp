#include<iostream>
using namespace std;
int main()
{
 int n,bit,t;
 int bitstream[50];
 cout<<"Assumption : 0 -> -ve and 1 -> +ve"<<endl;
 cout<<"Enter the number of Bits : ";
 cin>>n;
 cout<<"Enter the Bitstream : ";
 for(int i=0;i<n;i++)  
    { cin>>bitstream[i];}
 cout<<"Enter Previous Bit : ";
 cin>>bit; 
 cout<<"\n1. Unipolar NRZ\n2. Unipolar RZ\n3. Polar NRZ\n4. Manchester Encoding "; 
 cout<<"\nChoose LineCoding Technique : ";
 cin>>t;
 cout<<"Bitstream : ";
 for(int i=0;i<n;i++)
     {cout<<bitstream[i]<<" ";}
 switch (t)
 { 
 case 1: 
     cout<<"\nUnipolar NRZ : "; 
 for(int i=0;i<n;i++)
 {
     if(bitstream[i] == 0)
         cout<<"00 ";
     if(bitstream[i] == 1) 
         cout<<"11 ";
 }
     break;
case 2:
     cout<<"\nUnipolar RZ : ";
 for(int i=0;i<n;i++)
 {
     if(bitstream[i] == 0)
         cout<<"00 ";
     if(bitstream[i] == 1)
         cout<<"10 ";
 }
     break;
case 3:
     cout<<"\nPolar NRZ : ";
 for(int i=0;i<n;i++)
 {
     if(bitstream[i] == 0)
         cout<<"00 ";
     if(bitstream[i] == 1)
         cout<<"11 ";
 }
     break;

case 4:
      cout<<"\nManchester Encoding : ";
 for(int i=0;i<n;i++)
 {
     if(bitstream[i] == 0)
         cout<<"10 ";
     if(bitstream[i] == 1)
         cout<<"01 ";
 } 
     break;
 
 default:
        cout<<"\nEnter valid option";
     break;
}
return 0;
} 
