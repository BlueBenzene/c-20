#include <iostream>

int main () 
{
    int x ;
    while (std::cin >> x)
    if (x % 2 != 0)
        std::cout << x <<"is odd. \n";
    else
        std::cout << x << "is even. \n";

        
}