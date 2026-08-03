#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    
    std::cout << std::endl;

    // #include <cmath>
    // https://en.cppreference.com/cpp/header/cmath

    double weight {7.7};
    double savings {-5000};

    std::cout << "Original weight: " << weight << std::endl;
    std::cout << "Original savings: " << savings << std::endl;
    std::cout << std::endl;

    // round to floor std::floor(T)
    std::cout << "Weight rounded to floor with std::floor(T) : " << std::floor(weight) << std::endl;
    std::cout << std::endl;

    // round to floor std::ceil(T)
    std::cout << "Weight rounded to ceil with std::ceil(T) : " << std::ceil(weight) << std::endl;
    std::cout << std::endl;

    // absolut std::abs(T) turn any number into positive
    std::cout << "Weight to absolute with std::abs(T) : " << std::abs(weight) << std::endl;
    std::cout << std::endl;

    std::cout << "Savings to absolute with std::abs(T) : " << std::abs(savings) << std::endl;
    std::cout << std::endl;

    // exponential exp(x) = eˣ
    // exp: f(x) = e ^ x, where e = 2.71828
    double exponential = std::exp(10);
    std::cout << "The exponential of 10 is: " << exponential << std::endl;
    std::cout << std::endl;

    // power std::pow(x, y)
    std::cout << "std::pow(9, 5): 9 to the power of 5 is: " << std::pow(9, 5) << std::endl;
    std::cout << "std::pow(2, 5): 2 ^ 5 is: " << std::pow(2, 5) << std::endl;
    std::cout << std::endl;

    // log: reverse funcition of pow. If 2^3= 8, then log 8 in base 2 = 3. 
    // log is like asking to which exponent shoul we elevate 2 to get 8
    // log, by default, computes the log in base e. There is also a function that uses base 10, called log10
    // std::log(x) and std::log10(x)
    
    // Try the reverse operation of e^4 = 54.59, it will be log 54.59 in base e = ?
    std::cout << "Log to get 54.49 would need to elevate e to the power of std::log(54.59) : " << std::log(54.59) << std::endl;
    std::cout << std::endl;

    // log10, 10 ^ 4 = 10000. To get 10000, you would need to elevate 10 to the powr of ? 
    std::cout << "Log10 to get 10000 would need to elevate 10 to the power of std::log10(10000) : " << std::log10(10000) << std::endl;
    std::cout << std::endl;

    // square root std::sqrt(x)
    std::cout << "The square root of 81 is std::sqrt(81): " << std::sqrt(81) << std::endl;
    std::cout << std::endl;

    // round std::round(x) Halfway points are rounded away from 0
    std::cout << "The number 3.654 rounded with std::round(3.654) is: " << std::round(3.654) << std::endl;
    std::cout << "The number 2.5 rounded with std::round(2.5) is: " << std::round(2.5) << std::endl;
    std::cout << "The number 2.4 rounded with std::round(2.4) is: " << std::round(2.4) << std::endl;
    std::cout << std::endl;

    // We also have trigonometry functions, as sin(), cos(), tan(), asin(), acos(), atan() and atan2()
    // Other functions exist too, all documented in the cmath section of cppreference website




    
    return 0;
}