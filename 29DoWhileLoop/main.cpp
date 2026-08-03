#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    const size_t COUNT {10};
    
    size_t i {};

    do {
        std::cout << "Task im doing until i reaches 10: " << i << std::endl;
        ++i; // Increment
    } while (i < COUNT); // Test

    // In do shile, the code is executed at least one time before the test is made
    // Run the body, then checks


    return 0;
}