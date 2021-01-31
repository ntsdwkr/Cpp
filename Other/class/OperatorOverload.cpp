// operator overloading complex class
#include <iostream>
using namespace std;

class complex{
    public:
    double real;
    double img;
    complex(double r=0, double i=0){
        real = r;
        img = i;
    }
    
    complex operator+(complex c){
        complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    complex operator-(complex c){
        complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
     complex operator*(complex c){
        complex temp;
        temp.real = real*(c.real) - img*(c.img);
        temp.img = img*(c.real) + real*(c.img);
        return temp;
    }
    complex operator/(complex c){
        complex temp;
        temp.real = (real*(c.real) + img*(c.img)) / (c.real*c.real+c.img*c.img);
        temp.img = (img*(c.real) - real*(c.img)) / (c.real*c.real+c.img*c.img);
        return temp;
    }
    void display(){
        cout<<real<<" + "<<"("<<img<<")i"<<endl;
    }
};


int main() {
    complex c1(3,4);
    complex c2(5,9);
    complex c3;
    c3 = c1 + c2;
    c3.display();
	complex c4;
	c4 = c3 - c2;
	c4.display();
	complex c5;
	c5 = c4 * c2;
	c5.display();
	complex c6;
	c6 = c4 / c3;
	c6.display();
	return 0;
}
