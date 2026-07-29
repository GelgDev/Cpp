#include <iostream>
#include <string>

int main(){
    
    //Allow us to assign the result of a operation in one go

    int value {45};

    std::cout << "The value is: " << value << std::endl;
    std::cout << std::endl;

    value += 5; // equivalent to value = value + 5;
    std::cout << "The value is (after value += 5): " << value << std::endl;
    std::cout << std::endl;

    value -= 5; // equivalent to value = value - 5;
    std::cout << "The value is (after value -= 5): " << value << std::endl;
    std::cout << std::endl;

    value *= 2; // equivalent to value = value * 2;
    std::cout << "The value is (after value *= 2): " << value << std::endl;
    std::cout << std::endl;

    value /= 3; // equivalent to value = value / 3;
    std::cout << "The value is (after value /= 3): " << value << std::endl;
    std::cout << std::endl;

    value %= 11; // equivalent to value = value % 11;
    std::cout << "The value is (after value %= 11): " << value << std::endl;
    std::cout << std::endl;

    //Why use compound operations?
    // Its compact, faster to write. 


    return 0;
}