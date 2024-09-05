#include <iostream>
#include <locale>


int maximum (int a, int b);

int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a{0}, b{0};

    //std::cout << maximum(a, b) << '\n';
    a = 50;
    b = 90;

   std::cout << maximum(a, b) << '\n';

    return 0;

}

int maximum (int a, int b)
{
    //operador ternário
    std::cout << ((a > b) ? "O valor de A é = " : "O valor de B é = ") << (a > b ? a : b) << '\n';

    return a > b ? a : b;
}
