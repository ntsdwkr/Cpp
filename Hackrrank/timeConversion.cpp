
string timeConversion(string s) {
    char ss[3];
    ss[0]=s[0];
    ss[1]=s[1];
    ss[2]='\0'; // remember null character in string
    string sx(ss);
    
    int x = stoi(sx); // string to int
    
    if(s[8]=='A' && x==12){
        s[0]='0';
        s[1]='0';
        s.erase(8,2);
    }
    if(s[8]=='P' && x==12){
        s.erase(8,2);
    }
    if(s[8]=='A' && x!=12){
        s.erase(8,2);
        return s;
    }
    if(s[8]=='P' && x!=12){
        int y=x+12;
        int p=y/10;
        int q=y%10;
        
        string m = to_string(p); // int to string
        string n = to_string(q);
        
        s[0]=m[0]; // remember null char in case of string
        s[1]=n[0];
        s.erase(8,2);
    }
    
    return s;
}
