#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    
    std::cout << std::endl;

    // Integral types less than 4 bytes dont support arithmetic operations (+, -, *, /)
    // char and short in are an example (1 and 2 bytes respectively)
    // But why? Processor design, where they decided to use int (4 bytes) as the smallest type to make arithmetic operations
    // Compilers are smart enough to see when you try to use them in operations and AUTOMATICALLY CONVERT them to be able to use them

    int width {20};

    short int var1 {10};
    short int var2 {20};

    char var3 {40};
    char var4 {50};

    std::cout << std::left;
    std::cout << std::setw(width) << "Var" << std::setw(width) << "Value" << std::setw(width) << "sizeof" << std::endl;
    std::cout << std::setw(width) << "var1" << std::setw(width) << var1 << std::setw(width) << sizeof(var1) << std::endl;
    std::cout << std::setw(width) << "var2" << std::setw(width) << var2 << std::setw(width) << sizeof(var2) << std::endl;
    std::cout << std::setw(width) << "var3" << std::setw(width) << var3 << std::setw(width) << sizeof(var3) << std::endl;
    std::cout << std::setw(width) << "var4" << std::setw(width) << var4 << std::setw(width) << sizeof(var4) << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    //adding them
    auto result1 {var1 + var2};
    auto result2 {var3 + var4};

    std::cout << std::setw(width) << "var1 + var2 result:" << std::setw(5) << result1 << std::setw(width) 
        << "sizeof result1:" << std::setw(5) << sizeof(result1)  << std::endl;
    std::cout << std::setw(width) << "var3 + var4 result:" << std::setw(5) << result2 << std::setw(width)
        << "sizeof result2:" << std::setw(5) << sizeof(result2)  << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;


    //The same behavior is present on other operators like bitwise shift operators (>> and <<)
    

    return 0;
}