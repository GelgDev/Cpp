#include <iostream>
#include <string>

int main(){
    
    //Add, subtract, divide, multiply and modulus operations

    int n1 {67};
    int n2 {22};
    int n3 {5};
    int n4 {2};


    //Addition +
    int sum {n1 + n2};
    std::cout << "The sum of " << n1 << " and " << n2 << " results in " << sum << std::endl;
    std::cout << std::endl;

    //Subtraction -
    int sub {n2 - n3};
    std::cout << "The subtraction of " << n3 << " from " << n2 << " results in " << sub << std::endl;
    std::cout << std::endl;

    //Multiplication *
    int mult {n2 * n3};
    std::cout << "The multiplication of " << n2 << " and " << n3 << " results in " << mult << std::endl;
    std::cout << std::endl;

    //Division /
    //The division with integers returns how many times we can fit a number into other, the decimal part is removed. for example 30/7 results in 4, as 7 fit 4 times in 30 (28)
    int div {n1 / n4};
    std::cout << "The division of " << n1 << " by " << n4 << " results in " << div << std::endl;
    std::cout << std::endl;

    //Modulus %
    //The opposite of the division, it returns just the part that dont fit in the original division. 30%7 returns 2. Think as 30/7 = 4. 4*7 = 28. 30 - 28 = 2. 
    int mod {n1 % n4};
    std::cout << "The modulus of " << n1 << " and " << n4 << " results in " << mod << std::endl;
    std::cout << std::endl;

    return 0;
}