#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>

int main(){
    
    // #include <limits>


    //Going to look at some functions of this library
    // std::numeric_limits<T>::min()
    // std::numeric_limits<T>::max()
    // std::numeric_limits<T>::lowest()

    // T is a placeholder for the type we are going to ge the minimum, maximum and lowest point respectively
    
    // Floating point values
    // lowest: -3.40282e+38 ->> minumum negative floatin point number representable
    // 0
    // min: 1.17549e-38 ->> smallest positive number representable with that floating point
    // max: 3.40282e+38 ->> maximum positive floating point number representable


    // Signed Integer
    // lowest: -
    // 0
    // min: -32768
    // max: 32767


    // Unsigned Integer (Short)
    // lowest: -
    // 0
    // min: 0
    // max: 65535


    // #include <limits>
    
    std::cout << "Short range is \nMin: " << std::numeric_limits<short>::min() << "\nMax: " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Lowest: " << std::numeric_limits<short>::lowest() << std::endl;
    std::cout << std::endl;

    std::cout << "Unsigned short range is \nMin: " << std::numeric_limits<unsigned short>::min() << "\nMax: " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "Lowest: " << std::numeric_limits<unsigned short>::lowest() << std::endl;
    std::cout << std::endl;

    std::cout << "Int range is \nMin: " << std::numeric_limits<int>::min() << "\nMax: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Lowest: " << std::numeric_limits<int>::lowest() << std::endl;
    std::cout << std::endl;

    std::cout << "Unsigned int range is \nMin: " << std::numeric_limits<unsigned int>::min() << "\nMax: " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "Lowest: " << std::numeric_limits<unsigned int>::lowest() << std::endl;
    std::cout << std::endl;

    std::cout << "Long range is \nMin: " << std::numeric_limits<long>::min() << "\nMax: " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Lowest: " << std::numeric_limits<long>::lowest() << std::endl;
    std::cout << std::endl;

    std::cout << "Long long range is \nMin: " << std::numeric_limits<long long>::min() << "\nMax: " << std::numeric_limits<long long>::max() << std::endl;
    std::cout << "Lowest: " << std::numeric_limits<long long>::lowest() << std::endl;
    std::cout << std::endl;

    std::cout << "Float range is \nMin: " << std::numeric_limits<float>::min() << "\nMax: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Lowest: " << std::numeric_limits<float>::lowest() << std::endl;
    std::cout << std::endl;

    std::cout << "Double range is \nMin: " << std::numeric_limits<double>::min() << "\nMax: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Lowest: " << std::numeric_limits<double>::lowest() << std::endl;
    std::cout << std::endl;

    std::cout << "Long double range is \nMin: " << std::numeric_limits<long double>::min() << "\nMax: " << std::numeric_limits<long double>::max() << std::endl;
    std::cout << "Lowest: " << std::numeric_limits<long double>::lowest() << std::endl;
    std::cout << std::endl;

    // Lowest is used in floating point numbers, because the low shows the minimum POSITIVE number when used with them. Lowest shows the minimum NEGATIVE number.


    // Other uses: https://en.cppreference.com/cpp/types/numeric_limits
    
    // std::numeric_limits<T>::is_signed : returns a bool
    std::cout << "Int is signed: " << std::numeric_limits<int>::is_signed << std::endl; 
    std::cout << std::endl;

    // std::numeric_limits<T>::digits : returns the number of digits in the specified type
    std::cout << "Int digits: " << std::numeric_limits<int>::digits << std::endl;
    std::cout << std::endl;




    return 0;
}