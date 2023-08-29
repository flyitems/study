int main() {
    cout << "欢迎使用面积计算器！" << endl;
    string unit;
    cout << "请输入长度的单位（厘米/英寸）：";
    cin >> unit;

    cout << "请选择要计算的图形类型：" << endl;
    cout << "1. 正方形" << endl;
    cout << "2. 长方形" << endl;
    cout << "3. 三角形" << endl;
    cout << "4. 圆形" << endl;

    int option;
    cout << "请输入选项：";
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
        cout << "无效的选项！" << endl;
        return 0;
    }

    shape->calculateArea();
    delete shape;

    return 0;
}
