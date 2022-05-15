#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

  /*  int str;
    cout << "Введите направление автомобиля: ";
    cin >> str;
   /* if (str == 1)
        cout << "Машина едет налево\n";
    else if (str == 2)
        cout << "Машина едет направо\n";
    else if (str == 3)
        cout << "Машина едет прямо\n";
    else if (str == 3)
        cout << "Машина едет назад\n";
    else
        cout << "Машина стоит на месте";*/


  /*  switch (str) {
    case 1:cout << "Машина едет прямо\n";
        break;
    case 2:cout << "Машина едет назад\n";
        break;
    case 3:cout << "Машина едет налево\n";
        break;
    case 4:cout << "Машина едет направо\n";
        break;
    default:cout << "Машина стоит на месте";
        break;
    }*/

   /* const int left = 1, right = 2, ahead = 3;

    enum direction{left=1,right,ahead};

    switch (str)
    {
    case left:cout << "Машина едет налево\n";
        break;
    case right:cout << "Машина едет направо\n";
        break;
    case ahead:cout << "Машина едет прямо\n";
        break;
    default:cout << "Машина едет назад\n";
        break;*/

   /* int a;
    cin >> a;
    (a % 2) ? cout << "Нечётное": cout << "Чётное";

    int b, c;
    cin >> b >> c;
    (c < b) ? cout << c : cout << b;*/


   /* int a;
    cin >> a;

    if (a > 0)
        cout << "Положительное";
    else if (a < 0)
        cout << "Отрицательное";
    else if(a == 0)
        cout << "Равно нулю";

    int b, c;
    cin >> b >> c;
    if (b == c)
        cout << "Числа равны";
    else if (b < c)
        cout << b << c;
    else if (c < b)
        cout << c << b;*/
   // int a, b;
    //cin >> a>> b;
    //(a!=0)?

    /*int a, b;
    cin >> a >> b;
    if (a % 3 == 0)cout << "число кратно 3\n";
    if (a%6==0)cout << "число кратно 6\n";
    if (a % 9 == 0)cout << "число кратно 9\n";
    
    if (b % 3 == 0)cout << "число кратно 3\n";
    if (b % 6 == 0)cout << "число кратно 6\n";
    if (b % 9 == 0)cout << "число кратно 9\n";*/


   /* int a;
    cin >> a;
    (a % 2 == 0) ? cout << a * 3 : cout << (float)a / 2;

    int b, c, d, e, f;
    float sred;
    cin >> b >> c >> e >> d >> f;
    sred = (b + c + d + e + f) / 5;
    if (sred >= 4)
        cout << "Допущен";
    else
        cout << "Не допущен";
        */
/*
enum numbers {
    zero,
    one,
    two,
    three,
    four,
    five,
    six,
    seven
   };
    
int num;
cin >> num;

switch (num) {
case zero:
    cout << 1;
    break;
case one:
    cout << pow(num,1);
    break;
case two:
    cout << pow(num, 2);
    break;
case three:
    cout << pow(num, 3);
    break;
case four:
    cout << pow(num, 4);
    break;
case five:
    cout << pow(num, 5);
    break;
case six:
    cout << pow(num, 6);
    break;
case seven:
    cout << pow(num, 7);
    break;
    
}*/

system("color 57");

enum color{black,blue,green,superblue,red,
           purple,yellow,white,grey,lightblue};

int color_background, color_text;
cout << "Выбор цвета:\n";
cout << "0. Чёрный\n"
"1.Синий\n"
"2.Зелёный\n"
"3.Голубой\n"
"4.красный\n"
"5.лиловый\n"
"6.жёлтый\n"
"7.белый\n"
"8.серый\n"
"9.светло-синий\n";
cout << "Цвет фона"; cin >> color_background;
cout << "Цвет текста"; cin >> color_text;

switch (color_background) {
case black:
    switch (color_text) {
        system("color 00");
        break;
    case blue:
        system("color 01");
        break;

        }
}




}


