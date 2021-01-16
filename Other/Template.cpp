// Template Class

#include <iostream>
using namespace std;

template <typename T, typename U>
class Pair
{
	T x;
	U y;

public:
	void setX(T x)
	{
		this->x = x;
	}
	T getX()
	{
		return x;
	}
	void setY(U y)
	{
		this->y = y;
	}
	U getY()
	{
		return y;
	}
};

int main()
{
	Pair<int, Pair<double, int>> p; // Triplate <int, double, int> using Pair 
	Pair<double, int> p2;
	p2.setX(11.11);
	p2.setY(5);
	p.setY(p2);
	cout << p.getX() << endl;
	cout << p.getY().getX() << endl;
	cout << p.getY().getY() << endl;

	return 0;
}
