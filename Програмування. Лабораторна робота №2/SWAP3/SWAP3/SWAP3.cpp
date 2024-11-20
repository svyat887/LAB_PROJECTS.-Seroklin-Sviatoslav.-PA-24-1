// SWAP3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
    double A, B, C;
    int main()
    {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        std::cout << "Введіть числа 'A', 'B' і 'C':\n";
        std::cin >> A >> B >> C;
        std::cout << "Твої числа:              A = " << A << " B = " << B << " C = " << C << "\n";
        A = A + B;
        B = A - B;
        A = A - B;
        A = A + C;
        C = A - C;
        A = A - C;
        std::cout << "А тепер міняємо місцями: A = " << A << " B = " << B << " C=" << C;
        return 0;
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
