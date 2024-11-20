// HELLO3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
char i[21];
char m[21];
char v[4];
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Напиши Своє ім'я, будь ласка." << std::endl;
    std::cin.getline(i,21);

    std::cout << "Вкажи свій вік" << std::endl;
    std::cin.getline(v,21);

    std::cout << "Де навчаєшся?" << std::endl;;
    std::cin.getline(m,21);

    std::cout << "Так і запишемо..." << std::endl;;
    std::cout << "Звати " << i << "." << std::endl;;
    std::cout << "Тобі " << v << " років." << std::endl;;
    std::cout << m << " - це гарне місце для навчання.";
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
