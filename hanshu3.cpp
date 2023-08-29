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
        cout << "�����������εĵױ߳���(" << unit << ")��";
        cin >> base;
        cout << "�����������εĸ�(" << unit << ")��";
        cin >> height;
    }

    void calculateArea() {
        double area = 0.5 * base * height;
        cout << "ͼ�����ͣ�������" << endl;
        cout << "����ĳ��ȣ�" << unit << endl;
        cout << "��������" << fixed << setprecision(3) << area << " ƽ������" << endl;
    }
};
