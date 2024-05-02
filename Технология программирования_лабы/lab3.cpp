#include <iostream> // Подключение заголовочного файла библиотеки iostream, которая предоставляет функционал для ввода-вывода.

using namespace std; // Директива, позволяющая использовать элементы пространства имен std без указания префикса std::.

class Point { // Объявление абстрактного класса Point, который будет базовым классом для других геометрических фигур.
public:
    virtual void draw() const = 0; // Чисто виртуальная функция draw, определяющая интерфейс для рисования объекта.
    virtual void erase() const = 0; //  виртуальная функция erase, определяющая интерфейс для удаления изображения объекта с экрана.
    virtual void move(double dx, double dy) = 0; //  виртуальная функция move для перемещения объекта на величины dx и dy.
    virtual void rotate(double angle) = 0; // виртуальная функция rotate для вращения объекта на заданный угол angle.
    virtual ~Point() {} // виртуальный деструктор, необходимый для корректного удаления производных объектов через базовый указатель.
};

class Line : public Point { // Класс Line, наследуемый от Point, представляющий линию.
protected:
    double x1, y1, x2, y2; // Координаты начала (x1, y1) и конца (x2, y2) линии.
public:
    Line(double x1, double y1, double x2, double y2) : x1(x1), y1(y1), x2(x2), y2(y2) {} // Конструктор класса Line, инициализирующий координаты линии.
    void draw() const override { // Реализация функции draw для рисования линии.
        cout << "Risuyu liniyu ot (" << x1 << ", " << y1 << ") do (" << x2 << ", " << y2 << ")" << endl;
    }
    void erase() const override { // Реализация функции erase для удаления линии с экрана.
        cout << "Udalyayu liniyu" << endl;
    }
    void move(double dx, double dy) override { // Реализация функции move для перемещения линии.
        x1 += dx; y1 += dy;
        x2 += dx; y2 += dy;
    }
    void rotate(double angle) override { // Реализация функции rotate для вращения линии на угол angle.
        cout << "Povorachivayu liniyu na " << angle << " gradusov" << endl;
    }
};

class Rectangle : public Point {
protected:
    double x, y, width, height;
public:
    Rectangle(double x, double y, double width, double height) : x(x), y(y), width(width), height(height) {}
    void draw() const override {
        cout << "Risuyu pryamougol'nik na (" << x << ", " << y << ") s shirinoy " << width << " i vysotoy " << height << endl;
    }
    void erase() const override {
        cout << "Udalyayu pryamougol'nik" << endl;
    }
    void move(double dx, double dy) override {
        x += dx; y += dy;
    }
    void rotate(double angle) override {
        cout << "Povorachivayu pryamougol'nik na " << angle << " gradusov" << endl;
    }
};

class Square : virtual public Rectangle {
public:
    Square(double x, double y, double side) : Rectangle(x, y, side, side) {}
    void draw() const override {
        cout << "Risuyu kvadrat na (" << x << ", " << y << ") so storonoy " << width << endl;
    }
};

class Parallelogram : virtual public Rectangle {
protected:
    double angle;
public:
    Parallelogram(double x, double y, double width, double height, double angle) : Rectangle(x, y, width, height), angle(angle) {}
    void draw() const override {
        cout << "Risuyu parallelogramm na (" << x << ", " << y << ") s shirinoy " << width << ", vysotoy " << height << " i uglom " << angle << " gradusov" << endl;
    }
};

class Rhombus : public Square {
protected:
    double angle;
public:
    Rhombus(double x, double y, double side, double angle) : Square(x, y, side), angle(angle) {}
    void draw() const override {
        cout << "Risuyu romb na (" << x << ", " << y << ") so storonoy " << width << " i uglom " << angle << " gradusov" << endl;
    }
};

int main() { // Главная функция программы, точка входа.
    Point* p = new Rhombus(10, 10, 15, 45); // Создание объекта Rhombus через указатель на базовый класс Point.
    p->draw(); // Вызов метода draw для ромба.
    p->move(5, 5); // Вызов метода move для перемещения ромба.
    p->rotate(30); // Вызов метода rotate для вращения ромба.
    p->erase(); // Вызов метода erase для удаления изображения ромба.
    delete p; // Освобождение выделенной памяти.

    return 0; 
}
