// fraction class
#include<iostream>
using namespace std;

class fraction{
        int n;
	int d;
	public:
    fraction(int a, int b){
		n = a;
		d = b;
	}
	fraction(){
		n = 1;
		d = 1;
	}	
	int gcd(int a, int b){
        if (b != 0)
        return gcd(b, a % b);
        else
        return a; 
        }
	void display(){
		int g = gcd(n, d);
		int a = n / g;
		int b = d / g; 
		if((a<0 && b<0)||(a>0 && b<0)){
			a = -a;
			b = -b;
		}
		if(b == 0)
			cout<<"Infinite"<<endl;
		else
		cout<<a<<" / "<<b<<endl;
	}
	fraction add(fraction const &a, fraction const &b){
		int x = a.n * b.d + a.d * b.n;
		int y = a.d * b.d;
		fraction f(x, y);
		return f;
	}
	fraction sub(fraction const &a, fraction const &b){
		int x = a.n * b.d - a.d * b.n;
		int y = a.d * b.d;
		fraction f(x, y);
		return f;
	}
	fraction mul(fraction const &a, fraction const &b){
		int x = a.n * b.n;
		int y = a.d * b.d;
		fraction f(x,y);
		return f;
	}
	fraction div(fraction const &a, fraction const &b){
		int x = a.n / b.n;
		int y = a.d / b.d;
		fraction f(x,y);
		return f;
	}
	
};

int main(){
	fraction f1(3, 4);
	fraction f2(5, 2);
	fraction f3 = f3.add(f1, f2);
	fraction f4 = f4.add(f1, f3);
	fraction f5 = f5.sub(f1, f2);
	fraction f6 = f6.mul(f2, f1);
	fraction f7 = f7.div(f2, f1);

	f3.display();
	f4.display(); 
	f5.display(); 
	f6.display(); 
	f7.display(); 

	return 0;
}
