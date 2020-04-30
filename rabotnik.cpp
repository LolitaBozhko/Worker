// rabotnik.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


class worker
{
   public: 
    string name;
    int exp, salary_p_h, worked_h;
    double prem;
    void enter()
    {
        cout << "Введите имя работника: ";
        cin >> name;
        cout << "Введите стаж работника: ";
        cin >> exp;
        cout << "Введите зарплату за час: ";
        cin >> salary_p_h;
        cout << "Введите кол-во отработанных часов: ";
        cin >> worked_h;
        cout << endl;
    }
    void print()
    {
        double prem = 0.0;
        if (exp < 1)
            prem = ((salary_p_h * worked_h) / 100) * 0;
        if (exp > 1 && exp < 3)
            prem = ((salary_p_h * worked_h) / 100) * 5;
        if (exp > 3 && exp < 5)
            prem = ((salary_p_h * worked_h) / 100) * 8;
        if (exp > 5)
            prem = ((salary_p_h * worked_h) / 100) * 15;

        cout << "Имя работника: " << name << endl;
        cout << "Стаж работы: " << exp << endl;
        cout << "Заработная плата в час: " << salary_p_h << endl;
        cout << "Отработанно часов: " << worked_h << endl;
        cout << "Зарплата: " << (salary_p_h * worked_h) << endl;
        cout << "Премия: " << prem << endl;

    }
};
int main()
{
    setlocale(LC_ALL, "Rus");
    worker w;
    w.enter();
    w.print();
    return 0;
}