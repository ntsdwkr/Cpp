//STL getline function 
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    string name;
    int id;
    cin>>id;
    cin.get();// acts as \n
 
    getline(cin, name);//takes one line as input, \n to \n
    cout << "Your id : " << id << "\n";
    cout <<name<<endl;//print onle one line from \n to \n
        
    getline(cin, name);//takes one line as input ie \n to \n
    cout <<name<<endl;//print onle one line from \n to \n

    getline(cin, name);//takes one line as input ie \n to \n
    cout <<name<<endl;//print onle one line from \n to \n
    
    getline(cin, name);//takes one line as input ie \n to \n
    cout <<name<<endl;//print onle one line from \n to \n
    
	return 0;
}

//input
/*
58
I am Nitish
I
am
Nitish
*/

//output
/*
Your id : 3
I am Nitish
I
am
Nitish
*/
