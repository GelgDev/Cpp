#include <iostream>
#include <string>

int main(){
    
    int val1 {5};

    std::cout << "Val1 actual value: " << val1 << std::endl;
    std::cout << std::endl;

    //Regular increment/decrement

    val1 = val1 + 1; //increment by one
    std::cout << "Val1 value after val1 = val1 + 1: " << val1 << std::endl;
    std::cout << std::endl;

    val1 = 5; //reset to 5
    std::cout << "Val1 value after val1 = 5: " << val1 << std::endl;
    std::cout << std::endl;

    val1 = val1 - 1; //decrement by one
    std::cout << "Val1 value after val1 = val1 - 1: " << val1 << std::endl;
    std::cout << std::endl;

    //Postfix increment/decrement
    //postfix ALWAYS increment or decrement by 1
    
    int val2 {10};
    std::cout << "val2 actual value: " << val2 << std::endl;
    std::cout << std::endl;

    val2++; //increment 
    std::cout << "val2 value after val2++: " << val2 << std::endl;
    std::cout << std::endl;

    val2 = 10; //reset to 10
    std::cout << "val2 value after val2 = 10: " << val2 << std::endl;
    std::cout << std::endl;

    val2--; //decrement
    std::cout << "val2 value after val2--: " << val2 << std::endl;
    std::cout << std::endl;

    //Prefix increment/decrement
    //prefix ALWAYS increment or decrement by 1
    
    int val3 {35};
    std::cout << "val3 actual value: " << val3 << std::endl;
    std::cout << std::endl;

    ++val3; //increment 
    std::cout << "val3 value after ++val3: " << val3 << std::endl;
    std::cout << std::endl;

    val3 = 35; //reset to 10
    std::cout << "val3 value after val3 = 35: " << val3 << std::endl;
    std::cout << std::endl;

    --val3; //decrement
    std::cout << "val3 value after --val3: " << val3 << std::endl;
    std::cout << std::endl;

    //ALWAYS USE PREFIX, its not the most common, but its never worse than postfix
    //postfix needs to create a copy to increment/decrement. Prefix doesnt need, its more efficient
    /*
        ++i - add 1, give back the new value.
        i++ - save the old value, add 1, give back the old value.
    
    */

    return 0;
}