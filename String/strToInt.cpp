int main()
{
  
    string name; 
    //getline(cin,name); //when space required in string
    cin>>name; // taking input
    cout<<name<<endl; 

    char s[]={name[0],name[1]}; //want to convert 2 digit int
    cout<<s<<endl; // char output

    int n = atoi(s); // char to int, if string to int-> stoi(str)
    cout<<n<<endl;
    cout<<n/5<<endl;

    int x = name[0]-'0'; // string to int if 1 digit int required
    cout<<x<<endl;
    cout<<x/5<<endl;
    
    return 0;
}
