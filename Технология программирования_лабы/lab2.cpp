// Примечание: \ предположим, что все операции производятся над векторами и матрицами одинаковой размерности. Для операции умножения вектора на матрицу предположим, что вектор и матрица совместимы.


#include <iostream>
using namespace std;

class vect {
public:
    int dim;
    double* b;
    int num;
    static int count;

    vect(int d) : dim(d), num(++count) {
        b = new double[dim];
        for (int i = 0; i < dim; ++i) b[i] = 0.0;
        cout << "Vector #" << num << " created\n";
    }

    vect(const vect& v) : dim(v.dim), num(++count) {
        b = new double[dim];
        for (int i = 0; i < dim; ++i) b[i] = v.b[i];
        cout << "Vector #" << num << " copied\n";
    }

    ~vect() {
        delete[] b;
        cout << "Vector #" << num << " destroyed\n";
    }

    // Вектор плюс вектор
    vect operator+(const vect& v) const {
        vect temp(dim);
        for (int i = 0; i < dim; ++i) temp.b[i] = b[i] + v.b[i];
        cout << "Adding Vector #" << num << " and Vector #" << v.num << "\n";
        return temp;
    }

    // Вектор минус вектор
    vect operator-(const vect& v) const {
        vect temp(dim);
        for (int i = 0; i < dim; ++i) temp.b[i] = b[i] - v.b[i];
        cout << "Subtracting Vector #" << v.num << " from Vector #" << num << "\n";
        return temp;
    }

    // Умножение вектора на вектор (скалярное)
    double operator*(const vect& v) const {
        double sum = 0.0;
        for (int i = 0; i < dim; ++i) sum += b[i] * v.b[i];
        cout << "Dot product of Vector #" << num << " and Vector #" << v.num << "\n";
        return sum;
    }

    // Умножение вектора на скаляр
    vect operator*(double k) const {
        vect temp(dim);
        for (int i = 0; i < dim; ++i) temp.b[i] = b[i] * k;
        cout << "Scaling Vector #" << num << " by " << k << "\n";
        return temp;
    }

    // Присваивание вектора вектору
    vect& operator=(const vect& v) {
        if (this != &v) {
            delete[] b;
            dim = v.dim;
            b = new double[dim];
            for (int i = 0; i < dim; ++i) b[i] = v.b[i];
            cout << "Assigning Vector #" << v.num << " to Vector #" << num << "\n";
        }
        return *this;
    }

    // Унарный минус
    vect operator-() const {
        vect temp(dim);
        for (int i = 0; i < dim; ++i) temp.b[i] = -b[i];
        cout << "Negating Vector #" << num << "\n";
        return temp;
    }

    // Вывод вектора
    void print() const {
        cout << "Vector #" << num << ": [";
        for (int i = 0; i < dim; ++i) {
            cout << b[i];
            if (i < dim - 1) cout << ", ";
        }
        cout << "]\n";
    }

    friend vect operator*(double k, const vect& v);
};

int vect::count = 0;

// Умножение скаляра на вектор (внешняя функция)
vect operator*(double k, const vect& v) {
    return v * k; // Используем уже определенный оператор умножения вектора на скаляр

}

class matr {
public:
    int dim;
    double* a;
    int num;
    static int count;

    matr(int d) : dim(d), num(++count) {
        a = new double[dim * dim];
        for (int i = 0; i < dim * dim; ++i) a[i] = 0.0;
        cout << "Matrix #" << num << " created\n";
    }

    matr(const matr& m) : dim(m.dim), num(++count) {
        a = new double[dim * dim];
        for (int i = 0; i < dim * dim; ++i) a[i] = m.a[i];
        cout << "Matrix #" << num << " copied\n";
    }

    ~matr() {
        delete[] a;
        cout << "Matrix #" << num << " destroyed\n";
    }

    // Матрица плюс матрица
    matr operator+(const matr& m) const {
        matr temp(dim);
        for (int i = 0; i < dim * dim; ++i) temp.a[i] = a[i] + m.a[i];
        cout << "Adding Matrix #" << num << " and Matrix #" << m.num << "\n";
        return temp;
    }

    // Матрица минус матрица
    matr operator-(const matr& m) const {
        matr temp(dim);
        for (int i = 0; i < dim * dim; ++i) temp.a[i] = a[i] - m.a[i];
        cout << "Subtracting Matrix #" << m.num << " from Matrix #" << num << "\n";
        return temp;
    }

    // Умножение матрицы на матрицу
    matr operator*(const matr& m) const {
        matr temp(dim);
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                temp.a[i * dim + j] = 0;
                for (int k = 0; k < dim; ++k) {
                    temp.a[i * dim + j] += a[i * dim + k] * m.a[k * dim + j];
                }
            }
        }
        cout << "Multiplying Matrix #" << num << " by Matrix #" << m.num << "\n";
        return temp;
    }

    // Унарный минус
    matr operator-() const {
        matr temp(dim);
        for (int i = 0; i < dim * dim; ++i) temp.a[i] = -a[i];
        cout << "Negating Matrix #" << num << "\n";
        return temp;
    }

    // Присваивание матрицы матрице
    matr& operator=(const matr& m) {
        if (this != &m) {
            delete[] a;
            dim = m.dim;
            a = new double[dim * dim];
            for (int i = 0; i < dim * dim; ++i) a[i] = m.a[i];
            cout << "Assigning Matrix #" << m.num << " to Matrix #" << num << "\n";
        }
        return *this;
    }

    // Умножение матрицы на скаляр
    matr operator*(double k) const {
        matr temp(dim);
        for (int i = 0; i < dim * dim; ++i) temp.a[i] = a[i] * k;
        cout << "Scaling Matrix #" << num << " by " << k << "\n";
        return temp;
    }

    // Умножение матрицы на вектор
    vect operator*(const vect& v) const {
        vect temp(dim);
        for (int i = 0; i < dim; ++i) {
            temp.b[i] = 0;
            for (int j = 0; j < dim; ++j) {
                temp.b[i] += a[i * dim + j] * v.b[j];
            }
        }
        cout << "Multiplying Matrix #" << num << " by Vector #" << v.num << "\n";
        return temp;
    }

    // Вывод матрицы
    void print() const {
        cout << "Matrix #" << num << ":\n";
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                cout << a[i * dim + j] << " ";
            }
            cout << "\n";
        }
    }

    friend matr operator*(double k, const matr& m);
};

int matr::count = 0;

// Умножение скаляра на матрицу (внешняя функция)
matr operator*(double k, const matr& m) {
    matr temp(m.dim);
    for (int i = 0; i < m.dim * m.dim; ++i) {
        temp.a[i] = m.a[i] * k;
    }
    cout << "Scaling Matrix by " << k << "\n";
    return temp;
}

int main() {
    // Создаем векторы
    vect v1(3);
    vect v2(3);
    
    // Присваиваем некоторые значения для демонстрации
    v1.b[0] = 1; v1.b[1] = 2; v1.b[2] = 3;
    v2.b[0] = 4; v2.b[1] = 5; v2.b[2] = 6;
    
    cout << "Initial vectors:\n";
    v1.print();
    v2.print();
    
    // Демонстрация операций с векторами
    vect v3 = v1 + v2;
    cout << "v1 + v2 = ";
    v3.print();
    
    vect v4 = v1 - v2;
    cout << "v1 - v2 = ";
    v4.print();
    
    double dotProduct = v1 * v2;
    cout << "v1 * v2 (dot product) = " << dotProduct << "\n";
    
    vect v5 = v1 * 2.0;
    cout << "v1 * 2 = ";
    v5.print();
    
    vect v6 = -v1;
    cout << "-v1 = ";
    v6.print();
    
    // Создаем матрицы
    matr m1(3);
    matr m2(3);
    
    // Присваиваем некоторые значения для демонстрации
    // Заполняем первую матрицу значениями от 1 до 9
    for (int i = 0; i < 9; ++i) {
        m1.a[i] = i + 1;
    }
    
    // Заполняем вторую матрицу значениями от 9 до 1
    for (int i = 0; i < 9; ++i) {
        m2.a[i] = 9 - i;
    }
    
    cout << "\nInitial matrices:\n";
    m1.print();
    m2.print();
    
    // Демонстрация операций с матрицами
    matr m3 = m1 + m2;
    cout << "m1 + m2 =\n";
    m3.print();
    
    matr m4 = m1 - m2;
    cout << "m1 - m2 =\n";
    m4.print();
    
    matr m5 = m1 * m2;
    cout << "m1 * m2 =\n";
    m5.print();
    
    matr m6 = m1 * 2.0;
    cout << "m1 * 2 =\n";
    m6.print();
    
    vect vm = m1 * v1;
    cout << "m1 * v1 = ";
    vm.print();
    
    return 0;
}
