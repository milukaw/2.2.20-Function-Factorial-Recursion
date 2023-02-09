#include <iostream>

int Factorial(int number);

int main()
{
    int x;
    std::cout << "wpisz liczbe: ";
    std::cin >> x; std::cout << std::endl;
    std::cout << Factorial(x);
}

int Factorial(int number)
{

    if (number > 1)
        return number *= (Factorial(number - 1));

    else
        return 1;
}
