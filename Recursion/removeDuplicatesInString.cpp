// recursion on string
#include <iostream>
using namespace std;

char* replaceXZ(char c[], char x, char z){
    
    if(c[0]==x) c[0]=z;
    if(c[0]=='\0') return c;
    replaceXZ(c+1,x,z);
    
}



int length(char c[]){
    if(c[0]=='\0') return 0;
    int i=0;
    int n=0;
    while(c[i]!='\0'){
        i++;
    }
    
    return i;

}
    
char* duplicate(char s[]){
    if(s[0]=='\0') return s;
    if(s[0]==s[1]){
        for(int i=1;i<=length(s);i++){
            s[i-1]=s[i];
        }
        duplicate(s);
    }
    else duplicate(s+1);
}

int main() {
	
	char c[100]={"aaabbcccdda"};
	int l = length(c);
	cout<<l<<endl;
	cout<<c<<endl;
	char x,z; // replace character
	cin>>x>>z; 
	replaceXZ(c,x,z);
	cout<<c<<endl;
	duplicate(c); //remove consecutive duplicates
	cout<<c<<endl;
	
	return 0;
}
