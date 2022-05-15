#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str;
    cout << "Введите направление автомобиля: ";
    cin >> str;
    if (str == "влево")
        cout << "Машина едет налево\n";
    else if (str == "вправо")
        cout << "Машина едет направо\n";
    else if (str == "вперёд")
        cout << "Машина едет прямо\n";
    else if (str == "назад")
        cout << "Машина едет назад\n";
    else
        cout << "Машина стоит на месте";

}


