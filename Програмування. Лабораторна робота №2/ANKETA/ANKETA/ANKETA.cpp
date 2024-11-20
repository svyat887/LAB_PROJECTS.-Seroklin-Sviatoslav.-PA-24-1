// ANKETA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include <Windows.h>
char a1[256], a2[256], a3[256], a4[256], a5[256], a6[256], a7[256], a8[256], a9[256], a10[256];
char b1[] = "Прізвище : ";
char b2[] = "Ім'я : ";
char b3[] = "По батькові : ";
char b4[] = "Стать : ";
char b5[] = "Дата народження : ";
char b6[] = "Адреса : ";
char b7[] = "Номер телефону : ";
char b8[] = "Місце навчання : ";
char b9[] = "Група : ";
char b10[] = "Хобі : ";
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "        Прізвище : ";
    std::cin.getline(a1,256);
    std::cout << "            Ім'я : ";
    std::cin.getline(a2,256);
    std::cout << "     По батькові : ";
    std::cin.getline(a3,256);
    std::cout << "           Стать : ";
    std::cin.getline(a4,256);
    std::cout << " Дата народження : ";
    std::cin.getline(a5,256);
    std::cout << "          Адреса : ";
    std::cin.getline(a6,256);
    std::cout << "  Номер телефону : ";
    std::cin.getline(a7,256);
    std::cout << "  Місце навчання : ";
    std::cin.getline(a8,256);
    std::cout << "           Група : ";
    std::cin.getline(a9,256);
    std::cout << "            Хобі : ";
    std::cin.getline(a10,256);
    std::cout << "\n\t\t\t\t\t\tА Н К Е Т А\n\n";
    std::cout << std::left; 
    std::cout  << std::setw(30) << b1  << std::setw(30) << a1 << std::setw(30) << b2  << std::setw(30) << a2 << std::setw(30) 
    << b3 << std::setw(30) << a3 << std::endl << std::endl;

    std::cout  << std::setw(30)  << b7 << std::setw(30) << a7  << std::setw(30) << b10 << std::setw(30) << a10 << std::endl << std::endl;

    std::cout  << std::setw(30)  << b8 << std::setw(30) << a8 << std::setw(30) << b9  << std::setw(30) << a9 << std::endl << std::endl;

    std::cout  << std::setw(30)  << b5 << std::setw(30) << a5 << std::setw(30) << b4  << std::setw(30) << a4 << std::endl << std::endl;

    std::cout  << std::setw(30)  << b6 << std::setw(30) << a6 << std::endl;
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
