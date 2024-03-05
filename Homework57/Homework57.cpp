#include <iostream>
#include <cmath>

using namespace std;
//1
//double Pi = 3.14159265358979323846;
//class Circle {
//protected:
//    double radius;
//
//public:
//    Circle(double r)
//    {
//        radius = r;
//    }
//
//    double getRadius() const {
//        return radius;
//    }
//
//    double getDiameter() const {
//        return 2 * radius;
//    }
//
//    double getArea() const {
//        return Pi * radius * radius;
//    }
//};
//
//class Square {
//protected:
//    double side;
//
//public:
//    Square(double s)
//    {
//        side = s;
//    }
//
//    double getSide() const {
//        return side;
//    }
//
//    double getArea() const {
//        return side * side;
//    }
//};
//
//class CIS : public Circle, public Square {
//public:
//    CIS(double s) : Circle(s / 2), Square(s) 
//    {
//
//    }
//    double getArea() const {
//        return Pi * (radius * radius);
//    }
//};
//
//int main() {
//    double sideLength;
//    cout << "Введите длину стороны квадрата: ";
//    cin >> sideLength;
//
//    CIS CIS(sideLength);
//    Square square();
//    cout << "Диаметр вписанной окружности: " << CIS.getDiameter() << endl;
//    cout << "Площадь вписанной окружности: " << CIS.getArea() << endl;
//}

class Wheels {
public:
    void rotate() {
        cout << "Колеса вращаются\n";
    }
};

class Engine {
public:
    void start() {
        cout << "Двигатель запущен\n";
    }

    void stop() {
        cout << "Двигатель остановлен\n";
    }
};

class Doors {
public:
    void open() {
        cout << "Двери открыты\n";
    }

    void close() {
        cout << "Двери закрыты\n";
    }
};

class Car : public Wheels, public Engine, public Doors {
public:
    void drive() {
        start();
        cout << "Автомобиль начал движение\n";
        rotate();
    }

    void stopCar() {
        stop();
        cout << "Автомобиль остановлен\n";
    }
};

int main() {
    Car car;
    car.open();
    car.drive();
    car.stopCar();
    car.close();
}