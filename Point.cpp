#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int xxx, int yyy) {
		x = xxx;
		y = yyy;
		cout << "construct a Point" << endl;
	}

	Point(Point &p) {
		x = p.x;
		y = p.y;
		cout << "copy struct a Point" << endl;
	}

	~Point() {
		cout << "restruct a Point" << endl;
	}
	int Getx(){
		return x;
	}
	int Gety() {
		return y;
	}

};

Point func()
{
	Point t(1, 1);

	return t;
}

int main()
{
	Point b(0, 0);

	b = func();

	cout << b.Getx() << ' ' << b.Gety() << endl;

	return 0;
}
