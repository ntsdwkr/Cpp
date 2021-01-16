#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

int main(){
    Rectangle r1(10,10);
    cout<<r1.area()<<endl;
    if (r1.isSquare())
    {
        cout<<"Yes"<<endl;
    }
    r1.setLength(-6);
    cout<<r1.getLength()<<endl;
    cout<<r1.perimeter()<<endl;
    return 0;
}

Rectangle:: Rectangle(){
    length = 1;
    breadth = 1;
}

Rectangle:: Rectangle(int l,int b){
    length = l;
    breadth = b;
}

Rectangle:: Rectangle(Rectangle &r){
    length = r.length;
    breadth = r.breadth;
}

void Rectangle:: setLength(int l){
    if(l>=0)
    length = l;
    else {
    cout<<"length can't be negative\nit is taken as 1"<<endl;
    length = 1;
    }
}

void Rectangle:: setBreadth(int b){
    if(b>=0)
    breadth = b;
    else
    {
    cout<<"breadth can't be negative\nit is taken as 1"<<endl;
    breadth = 1;
        
    }
    
}

int Rectangle:: area(){
    return length*breadth;
}

int Rectangle:: perimeter(){
    return 2*(length+breadth);
}

bool Rectangle:: isSquare(){
    return length==breadth;
}

Rectangle:: ~Rectangle(){
    cout<<"Rectangle Distroyed"<<endl;
}

