// print average , testing for a zero count 
// print nothing if no input

#include <iostream>

int main () {
    int sum{0};
    int count{};
    int x;
    while (std::cin >> x)
    
    {
        sum += x;
        ++count;
    }
    if (count == 0 )
    std::cout << "No Data.\n";
    else
        std::cout << "average = " << sum / count << '\n';
    
}