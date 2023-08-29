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


class Square : public Shape {   };


class Rectangle : public Shape {   };


class Triangle : public Shape {    };


class Circle : public Shape {     };

int main() {
    cout << "��ӭʹ�������������" << endl;
    string unit;
    cout << "�����볤�ȵĵ�λ������/Ӣ�磩��";
    cin >> unit;

    cout << "��ѡ��Ҫ�����ͼ�����ͣ�" << endl;
    cout << "1. ������" << endl;
    cout << "2. ������" << endl;
    cout << "3. ������" << endl;
    cout << "4. Բ��" << endl;

    int option;
    cout << "������ѡ�";
    cin >> option;

    Shape* shape = nullptr;
    switch (option) {
    case 1:
        shape = new Square(unit);
        break;
    case 2:
        shape = new Rectangle(unit);
        break;
    case 3:
        shape = new Triangle(unit);
        break;
    case 4:
        shape = new Circle(unit);
        break;
    default:
        cout << "��Ч��ѡ�" << endl;
        return 0;
    }

    shape->calculateArea();
    delete shape;

    return 0;
}

