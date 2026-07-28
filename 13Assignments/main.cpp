#include <iostream>
#include <string>

int main(){
    
    //After variables are initialized, we can assign a new value to it

    int var1 {123}; //declare and initialize
    std::cout << "var1 value: " << var1 << std::endl;

    var1 = 456; //assign a new value
    std::cout << "var1 value (after assign): " << var1 << std::endl;

    std::cout << std::endl;
    bool state {false};
    std::cout << std::boolalpha;
    std::cout << "bool state: " << state << std::endl;

    state = true;
    std::cout << "bool new state (after assign): " << state << std::endl;

    //Warning: Careful about Auto assignments
    auto var2 {123u}; //Declare and initialize with type deduction
    std::cout << std::endl;
    std::cout << "var2(auto) value: " << var2 << std::endl;

    var2 = -22; //Assign negative number. DANGER!!

    std::cout << "var2(auto) value after assigned: " << var2 << std::endl; //garbage value, cause var2 (unsigned int) is uncapable of storing negative values


    return 0;
}