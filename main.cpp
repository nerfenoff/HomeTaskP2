#include <iostream>
#include "212.h"

using namespace std;

int main()
{
    double t = 452.5631649912;

    int choise = 0;

    for(int i = 0; i < 12; ++i)
        cout << i+1 << " - task " << i+1 << endl;
    cout << "choice: ";
    cin >> choise;

    switch (choise) {
    case 1: cout << task1(t,10);
        break;
    case 2: cout << task2(t,10);
        break;
    case 3: cout << task3(t,3);
        break;
    case 4: cout << task4(t,10);
        break;
    case 5: cout << task5(t,4);
        break;
    case 6: cout << task6(t,3);
        break;
    case 7: cout << task7(t,5);
        break;
    case 8: task8(t,4);
        break;
    case 9: cout << task9(t,3);
        break;
    case 10: cout << task10(t,3);
        break;
    case 11: cout << task11(t,3);
        break;
    case 12: cout << task12(t,3);
        break;
    default: cout << "error";
        break;
    }

    return 0;
}
