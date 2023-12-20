#include <iostream>
#include <cassert>

// Функція для обчислення факторіалу
unsigned long long factorial(int n) {
    
    if (n <= 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

void UnitTest() {
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);

    // Тест для від'ємного числа
    assert(factorial(-5) == 1);

    std::cout << "UnitTest complited" << std::endl;
}

int main() {
    UnitTest();

    int number;

    // Введення числа від користувача
    std::cout << "Enter the number: ";
    std::cin >> number;

    // Обчислення та виведення факторіалу
    if (number < 0) {
        std::cout << "Factorial can't be negative number." << std::endl;
    }
    else {
        std::cout << "Factorial " << number << " = " << factorial(number) << std::endl;
    }

    return 0;
}