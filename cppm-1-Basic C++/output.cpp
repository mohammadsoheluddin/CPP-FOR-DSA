#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World\n";
    int a = 11;
    long long int b = 100000000;
    float c = 1.5;
    double d = 1.55555566;
    char cc = 'A';
    std::cout << a << "\n";
    std::cout << "My Favorite Number is" << a << "\n";
    std::cout << "My" << a << " Favorite Number is" << "\n";
    std::cout << a << " " << b << " " << c << " " << d << "\n";
    std::cout << a << "\n"
              << b << "\n"
              << c << "\n"
              << d << "\n";
    std::cout << a << std::endl
              << b << std::endl
              << c << std::endl
              << d << std::endl;
    return 0;
}