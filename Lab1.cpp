#include <iostream>
#include<Windows.h>
#include <locale.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c, max;
    cout << "Виберіть 3 цифри" << endl;
    cin >> a >> b >> c;
    max = a;
    
    if ( b>max) {
        max = b;

    }
    else if (c>max) {
        max = c;
    }
    cout << "Найбільше число: " << max << endl;
    return 0;
}
