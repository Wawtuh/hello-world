#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :
		x(_x), y(_y) {}
	void setX(int _x) { x = _x; }
	void setY(int _y) { y = _y; }
	void setXY(int _x, int _y) { x = _x; y = _y; }
	int getX() { return x; }
	int getY() { return y; }
	Point operator+(const Point& pt2) {
		Point pt(this->x + pt2.x, this->y + pt2.y);
		return pt;
	}
	Point operator-(const Point& pt2) {
		Point pt(this->x - pt2.x, this->y - pt2.y);
		return pt;
	}
};

ostream& operator<<(ostream cout, Point& pt) {
	cout << "(" << pt.getX() << ", " << ")";
	return cout;
}

int main() {

}