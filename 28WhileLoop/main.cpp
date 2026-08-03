#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //While loop
    const size_t COUNT {5};

    size_t i {};    // Iterator declaration

    while ( i < COUNT){     //Test
        std::cout << "while ( i < COUNT ):  i: " << i << "   COUNT: " << COUNT << std::endl;
        std::cout << "++i: " << i+1 << std::endl;
        ++i;    // Increment
    }
    std::cout << std::endl;

    std::cout << "while loop ended" << std::endl;

    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    return 0;
}