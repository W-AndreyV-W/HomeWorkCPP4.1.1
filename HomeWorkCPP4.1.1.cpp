#include <iostream>
#include <vector>
#include <algorithm>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::vector<int> array{ 4, 7, 9, 14, 12 };
    std::cout << "Входные данные: ";
    std::for_each(array.begin(), array.end(), [&](int tmp) {
        std::cout << tmp << " "; 
        });
    std::cout << std::endl;
    std::cout << "Выходные данные: ";
    std::for_each(array.begin(), array.end(), [&](int tmp) {
        if (tmp % 2 != 0) {
            tmp *= 3;
        }
        std::cout << tmp << " "; 
        });
    std::cout << std::endl;
}