#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Shape {
protected:
    string unit;

public:
    Shape(string unit) {
        this->unit = unit;
    }

    virtual void calculateArea() = 0;
};



class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(string unit) : Shape(unit) {
        cout << "请输入三角形的底边长度(" << unit << ")：";
        cin >> base;
        cout << "请输入三角形的高(" << unit << ")：";
        cin >> height;
    }

    void calculateArea() {
        double area = 0.5 * base * height;
        cout << "图形类型：三角形" << endl;
        cout << "输入的长度：" << unit << endl;
        cout << "面积结果：" << fixed << setprecision(3) << area << " 平方厘米" << endl;
    }
};
