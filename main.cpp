#include <iostream>

int maximum (int a, int b);


int main()
{

    int a = 10, b = 20;

    std::cout << maximum(a, b) << '\n';
    a = 50;
    b = 20;

   // std::cout << maximum(a, b) << '\n';

    return 0;

}

int maximum (int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
