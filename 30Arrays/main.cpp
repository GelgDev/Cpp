#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //Way to set collectons in a c++ program
    //Group variables and manage them as a single entity

    
    // Declaring and using
    // The declaration needs a square bracket [] to know its a collection
    int scores[5]; // An array storing 5 integers

    //reading the values
    std::cout << "Reading scores manually (garbage data, no data atributed to any yet)" << std::endl;
    std::cout << "scores[0]: " << scores[0] << std::endl;
    std::cout << "scores[1]: " << scores[1] << std::endl;
    std::cout << "scores[2]: " << scores[2] << std::endl;
    std::cout << "scores[3]: " << scores[3] << std::endl;
    std::cout << "scores[4]: " << scores[4] << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // BAD: reading past the array size reads something we dindnt put there
    std::cout << "Reading scores outside the boundaries of our array will return data that is not in the array" << std::endl;
    std::cout << "scores[5]: " << scores[5] << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //Looping through an array

    for (size_t i{0}; i < 5; ++i){
        std::cout << "Passing through the array in a loop: scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //Writing data into an array

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    scores[4] = 50;

    // writing data out of bounds is bad. DONT DO
    // scores[5] = 60

    std::cout << "Manually writing data in array" << std::endl;
    std::cout << std::endl;
    for (size_t i {0}; i < 5; ++i){
        std::cout << "Array in a loop with manually set values: scores[" << i << "] = " << scores[i] << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    for (size_t i {0}; i < 5; ++i){
        scores[i] = i*3;
    }

    std::cout << "Writing data in array with loop" << std::endl;
    std::cout << std::endl;
    for (size_t i {0}; i < 5; ++i){
        std::cout << "Array in a loop with loop set values: scores[" << i << "] = i*3: " << scores[i] << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //Declare and initialize an array at the same time
    std::cout << "Declaring and initializing the array at the same time" << std::endl;
    std::cout << std::endl;

    double salaries [5] {1620.5, 3000, 5400.16, 8.5, 9.9};

    for (size_t i{0}; i < 5; ++i){
        std::cout << "Salaries[" << i << "]: " << salaries[i] << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //Its possible to OMIT THE SIZE of the array
    //The compiler deduces the size from the amount of elements the array is initialized
    int class_sizes[] {10, 12, 15, 7, 9, 23}; //6

    for (auto value : class_sizes){
        std::cout << "class_size: " << value << std::endl;
    } 
    //Range based for loop: automatically pass through all the elements of the array

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //Constant arrays - cant be modified
    const int multipliers [] {22, 30, 15};
    //multipliers[1] = 20; //wont compile
    std::cout << "Constant arrays cant have values modified and wont compile if we try" << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //Operations on data stored in arrays

    int sum {0};

    for ( int element : scores){ //for each element in scores[]
        sum += element; //add score to sum
    }

    std::cout << "Sum of the scores: " << sum << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //THE TYPES IN THE ARRAY HAVE TO BE THE SAME AND CONSISTENT


    return 0;
}