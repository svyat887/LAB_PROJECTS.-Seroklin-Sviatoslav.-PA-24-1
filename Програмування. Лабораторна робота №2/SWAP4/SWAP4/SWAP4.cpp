// SWAP4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <concepts>
double A, B, C, D;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Введіть числа 'A', 'B', 'C' і 'D':\n";
    std::cin >> A >> B >> C >> D;
    std::cout << "Твої числа:              A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
    std::swap(A, B);
    std::swap(A, C);
    std::swap(A, D);
    std::cout << "А тепер міняємо місцями: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
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
