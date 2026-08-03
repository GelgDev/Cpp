#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //Used to make repetitive tasks faster, repeating it as many times as needed

    for (unsigned int i {}; i < 5; ++i){
        std::cout << "i val: " << i << std::endl;
    }

    // for (unsigned int i {}; i < 10; ++i) 
    // for (starting point set to 0; from starting point while starting point is less than 10; increment starting point by 1){ action to be performed }

    // Pillars of any loop
    // Iterator
    // Starting point
    // Test (controls when the loop stops)
    // Increment/Decrement
    // Loop body

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // There is a type in c++ used to iterators, the size_t
    // size_t is not a type, just a type alias for an unsigned int representation, making the code more readable
    // 8 bytes (can change depending on the compiler used)
    // as its a represetation of a unsigned int, it can only represent positive numbers

    for (size_t i {}; i < 5; ++i){
        std::cout << "now using size_t i {} to initialize: " << i << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Sizeof size_t: " << sizeof(size_t) << std::endl;

    // We can make a lot of operations in the loop body

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;
    
    std::cout << std::left;

    for (size_t i {}; i < 5; ++i){
        std::cout << "i value: " << std::setw(5) << i << " and it doubled: " << std::setw(5) << i*2 << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // We can also drop the {} if there is only one statement being done in the loop body

    for (size_t i {}; i < 3; ++i)
        std::cout << "Without curly braces: " << i  << std::endl;
    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // The iterator can live outside the loop, so it can be accessed from inside and outside of the loop

    size_t j {};

    std::cout << "j value before loop: " << std::setw(5) << j << std::endl;
    std::cout << std::endl;

    for ( ; j < 5; ++j){ 
        //as j is declared outside the for loop, we dont need to put it fisrt, but is possible
        // for (j; j < 5; ++j){ <code> }
        std::cout << "j value during loop: " << std::setw(5) << j << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "j value after loop: " << std::setw(5) << j << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // Its not a good thing to have hardcoded values, and a good practice is to have them in a variable
    // If needed to change, you dont have to manually alter all the occurrences of that value in the code

    const size_t COUNT {5};
    for (size_t i {}; i < COUNT; ++i){
        std::cout << "Using i < COUNT, with COUNT being a const size_t COUNT {5}: " << i << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    
    return 0;
}