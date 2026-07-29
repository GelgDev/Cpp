#include <iostream>
#include <string>

int main(){
    
    // AND &&
    // OR ||
    // NOT !

    bool t1 {true};
    bool f1 {false};

    // Boolean operants

    //AND -> Return True (1) when all elements used in the comparison are equal to true
    //if any element is false, we get false

    bool result { t1 && t1 };

    std::cout << std::boolalpha;

    std::cout << "true and true: " << result << std::endl;
    std::cout << std::endl;
    
    result = t1 && f1;
    std::cout << "true and false: " << result << std::endl;
    std::cout << std::endl;

    result = {f1 && f1};
    std::cout << "false and false: " << result << std::endl;
    std::cout << std::endl;

    //OR -> Return true if one of the elements is equal to true
    //if any element is true, we get true

    result = t1 || t1;
    std::cout << "true or true: " << result << std::endl;
    std::cout << std::endl;
    
    result = t1 || f1;
    std::cout << "true or false: " << result << std::endl;
    std::cout << std::endl;

    result = f1 || f1;
    std::cout << "false or false: " << result << std::endl;
    std::cout << std::endl;

    //NOT -> Return the opposite of the bool value. If true, return false. NEGATE the value

    result = !t1;
    std::cout << "when t1 equals true, !t1 equals: " << result << std::endl;
    std::cout << std::endl;

    //Combine Logical operators
    std::cout << "!(t1 && f1) || t1 :" << (!(t1 && f1) || t1 ) << std::endl;
    std::cout << std::endl;

    //We can also combine logical and relational operators
    int a {59};
    int b {70};

    std::cout << "a > b : " << (a > b) << std::endl;
    std::cout << "a == b : " << (a == b) << std::endl;
    std::cout << "(a > b) && (a == b) : " << ((a > b) && (a == b)) << std::endl;
    std::cout << "!((a > b) && (a == b)) : " << (!((a > b) && (a == b))) << std::endl;

    return 0;
}