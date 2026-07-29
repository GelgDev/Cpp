#include <iostream>
#include <string>

int main(){
    
    int n1 {45};
    int n2 {60};

    std::cout << "First number: " << n1 << std::endl;
    std::cout << "Second number: " << n2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;
    std::cout << std::endl;

    std::cout << std::boolalpha;

    std::cout << "n1 < n2 : " << (n1 < n2) << std::endl; //is n1 smaller than n2?
    std::cout << std::endl;

    std::cout << "n1 <= n2 : " << (n1 <= n2) << std::endl; //is n1 smaller or equal n2?
    std::cout << std::endl;

    std::cout << "n1 > n2 : " << (n1 > n2) << std::endl; //is n1 bigger than n2?
    std::cout << std::endl;

    std::cout << "n1 >= n2 : " << (n1 >= n2) << std::endl; //is n1 bigger or equal n2?
    std::cout << std::endl;
    
    std::cout << "n1 == n2 : " << (n1 == n2) << std::endl; //is n1 equal n2?
    std::cout << std::endl;

    std::cout << "n1 != n2 : " << (n1 != n2) << std::endl; //is n1 different of n2??
    std::cout << std::endl;

    // Relational operators are equal to booleans, returning true (1) or false (0)
    // The parentheses are needed because << from the std::cout has a higher precedence than the < of the comparison. 
    // Using () makes the n1 < n2 be resolved before, printing in the correct order

    bool result {n1 < n2};

    std::cout << "Stored variable of n1 < n2 : " << result << std::endl;


    return 0;
}