// Guess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
char sero;
double i;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Загадай число. (Щоб перейти далі, введи будь-який символ і натисни 'Enter')\n";
    std::cin >> sero;
    std::cout << "Помнож його на 8. (Щоб перейти далі, введи будь-який символ і натисни 'Enter')\n";
    std::cin >> sero;
    std::cout << "Додай 3. (Щоб перейти далі, введи будь-який символ і натисни 'Enter')\n";
    std::cin >> sero;
    std::cout << "Поділи на 4. (Щоб перейти далі, введи будь-який символ і натисни 'Enter')\n";
    std::cin >> sero;
    std::cout << "Помнож на 7. (Щоб перейти далі, введи будь-який символ і натисни 'Enter')\n";
    std::cin >> sero;
    std::cout << "Піднеси отримане число до квадратного степеня. (Щоб перейти далі, введи будь-який символ і натисни 'Enter')\n";
    std::cin >> sero;
    std::cout << "Введи, що отримав:\n";
    std::cin >> i;
    i = (sqrt(i)*4/7 - 3)/8;

    std::cout << "Твоє число: " << i << "\n";
    std::cout << i;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
