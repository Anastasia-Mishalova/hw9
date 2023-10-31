// hw9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

// Создайте класс Дробь. Используя перегрузку операторов реализуйте для него арифметические операции 
// для работы с дробями (операции + , -, *, / ). 

class Decimal
{
private:
    float num;

public:
    Decimal(float num)
    {
        this->num = num;
    }

    void print() const
    {
        cout << num << endl;
    }

    Decimal operator +(const Decimal& other)
    {
        return this->num + other.num;
    }

    Decimal operator -(const Decimal& other)
    {
        return this->num - other.num;
    }

    Decimal operator /(const Decimal& other)
    {
        return this->num / other.num;
    }

    Decimal operator *(const Decimal& other)
    {
        return this->num * other.num;
    }
};




// Создайте класс Complex(комплексное число) или используйте уже созданный вами класс. Создайте перегруженные
// операторы для реализации арифметических операций по работе с комплексными числами(операции + , -, *, / ).

class Complex
{
private:
    float num1, num2;

public:
    Complex(float num1, float num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    void print() const
    {
        cout << num1 << ", " << num2 << endl;
    }

    Complex operator +(const Complex& other)
    {
        return Complex(this->num1 + other.num1, this->num2 + other.num2);
    }

    Complex operator -(const Complex& other)
    {
        return Complex(this->num1 - other.num1, this->num2 - other.num2);
    }

    Complex operator /(const Complex& other)
    {
        return Complex(this->num1 / other.num1, this->num2 / other.num2);
    }

    Complex operator *(const Complex& other)
    {
        return Complex(this->num1 * other.num1, this->num2 * other.num2);
    }
};

int main() {
    setlocale(LC_ALL, "ru");

    //1
    Decimal a(10);
    Decimal b(2);

    Decimal add{ a + b };
    Decimal sub{ a - b };
    Decimal div{ a / b };
    Decimal mult{ a * b };

    add.print();
    sub.print();
    div.print();
    mult.print();


    //2
    cout << endl;
    Complex a2(10, 2);
    Complex b2(20, 5);

    Complex add2{ a2 + b2 };
    Complex sub2{ a2 - b2 };
    Complex div2{ a2 / b2 };
    Complex mult2{ a2 * b2 };

    add2.print();
    sub2.print();
    div2.print();
    mult2.print();
}