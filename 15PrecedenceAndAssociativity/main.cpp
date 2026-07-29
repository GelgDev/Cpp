#include <iostream>
#include <string>

int main(){
    
    //Set of rules to know what to do when we have multiple operators
    //Example: a + b * c - d / e - f + g
    //In c++, multiplication and division have to be done before other operations
    //But what to do when theres only adition and subtraction?? Use associativity rules
    //Precedence: which operation to do first
    //Associativity: which direction or which order

    //https://cppreference.com/cpp/language/operator_precedence
    //Left-to-right
    // a*b  a/b  a%b
    // a+b  a-b

    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int result = a + b * c - d / e - f + g;
    std::cout << "Result of " << a << "+" << b << "*" << c << "-" << d << "/" << e << "-" << f << "+" << g << " : " << result << std::endl;
    
    int bc {b*c};
    int de {d/e};

    result = a + bc - de - f + g;
    std::cout<<std::endl;
    std::cout << "Result of " << a << "+" << bc << "-" << de << "-" << f << "+" << g << " : " << result << std::endl;

    result = a / b * c + d - e + f;
    std::cout << std::endl;
    std::cout << "Result of " << a << "/" << b << "*" << c << "+" << d << "-" << e << "+" << f << " : " << result << std::endl;

    int ab {a / b};
    int abc {ab * c};
    //Here we can se precedence being used to solve steps from left to right. We start from the left one (a/b), and then get the result of it to use in ab * c
    result = abc + d - e + f;
    std::cout << std::endl;
    std::cout << "Result of " << abc << "+" << d << "-" << e << "+" << f << " : " << result << std::endl;

    //using () makes the content inside higher on priority. Parenthesis are resolved from the most internal to most external, left to right.
    result = a + (b * c) - (d / e) - f + g; //in this example nothing changes, as the parenthesis have the same procedence as before
    std::cout << std::endl;
    std::cout << "Result of " << a << "+" << b << "*" << c << "-" << d << "/" << e << "-" << f << "+" << g << " : " << result << std::endl;

    result = (a + b) * (c + d) / (e + f);  //in this example, the additions are done before the multiplication and division. 
    //this returns 9 * 17 / 5
    std::cout << std::endl;
    std::cout << "Result of ( " << a << "+" << b << " ) * ( " << c << "+" << d << " ) / ( " << e << "+" << f << " ) :" << result << std::endl;


    return 0;
}