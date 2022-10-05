#include <iostream>
#include <iomanip>
#include <string>
#include "main.h"

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    double variant=5;
    cout << setw(50) << "Варіант 5" << endl;
    cout<< "Завдання перше ";
 
    double x = 0.48 * variant;
    double y = 0.49 * variant;
    double z = -1.32 * variant;

    B b(x, y, z);
    A a(x, y, z, b.calculate());
    cout << "a[x, y, z, b] = " << a.calculate() << endl;
    cout << "b[x, y, z] = " << b.calculate() << endl << endl;


   
    cout << setw(50) << "Завдання друге" << endl << setw(55) << "Функція табуляції" << endl;
    for (double x = -1.0; x <= 1.0; x += 0.2) {
        B b(x, y, z);
        A a(x, y, z, b.calculate());

        cout << "x = " << to_string(x).substr(0, 4) << setw(30) << "a[x, y, z, b] = " << to_string(a.calculate()).substr(0, 8) << setw(30) << "b[x, y, z] = " << b.calculate() << endl;
    }
    cout << endl;

    return 0;
}
