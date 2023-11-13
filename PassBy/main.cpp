#include <iostream>

void ChangeBy(int &Result, int &num, int &times);

int main()
{

    int Times{0};
    int Number{0};
    int Result{0};

    std::cout << "Enter a number: ";
    std::cin >> Number;
    std::cout << "Enter what you'd like to multiply it by: ";
    std::cin >> Times;

    ChangeBy(Result, Number, Times);

    std::cout << Number << " times " << Times << " is " << Result;

    return 0;
}

void ChangeBy(int &Result, int &num, int &times)
{
    Result = num * times;
}