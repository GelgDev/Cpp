#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //std::size() c++17

    //can get the size with std::size

    int scores []{50, 72, 4, 7, 67, 99, 81, 32, 82, 77, 25};

    std::cout << "scores size: " << std::size(scores) << std::endl;

    //can use the size to control the for, while and do while loops
    //std::size() gets the length of the array
    std::cout << std::left;

    size_t i {0};
    while ( i < std::size(scores)){
        std::cout << "score " << i << ": " << std::setw(5) << scores[i] << std::endl;
        ++i;
    }

    // But how was it made before std::size() was invented in cpp17?


    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << std::setw(20) << "Size of scores: " << sizeof(scores) << std::endl;
    std::cout << std::setw(20) << "Size of scores[0]: " << sizeof(scores[0]) << std::endl;
    std::cout << std::setw(20) << "Score item count: " << (sizeof(scores) / sizeof(scores[0])) << std::endl;

    size_t count {sizeof(scores) / sizeof(scores[0])};

    std::cout << std::endl;

    for ( size_t i {0}; i < count; ++i){
        std::cout << "Scores[i] using i < count, where count = (sizeof(scores) / sizeof(scores[0]) to count elements: " << scores[i] << std::endl;
    }

    //total size of the array divided by the size of a single element returns the number of elements

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;




    return 0;
}