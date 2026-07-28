#include <iostream>
#include <string>


int main() {

    /*
        std::cout -> Printing data to the console (terminal)
        std::cin -> Reading data from the terminal
        std::cerr -> Printing errors to the console
        std::clog -> Printing log messages to the console
    */

    //Printing data
    std::cout << "Hello World!" << std::endl;

    std::cout << "the number is: " << 12 << std::endl;

    int age {21};
    std::cout << "The age is: " << age << std::endl;

    //Error
    std::cerr << "std::cerr output: Something went wrong!" << std::endl;

    //Log message
    std::clog << "std::clog output: This is a log message!" << std::endl;



    //Reading data - gets data from terminal and is stored in a variable
    int age1;
    std::string name;

    std::cout << "Please type in your first name: " << std::endl;
    std::cin >> name;

    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age1;

    std::cout << "Hello " << name << "! You are " << age1 << " years old!" << std::endl;

    //Reading data with spaces
    std::cin.ignore(); 
        //ignora o proximo caractere, que fica no buffer do cin. No caso do age1, o enter (/n) para confirmar sobra.
        //assim, ao usar o cin getline, que espera por um /n para acabar o input, ele ja começa com o valor zerado
        //e ao dar enter com o valor do nome, o nome vem como /n e o age2 vem com o valor que era do nome, resultando em 0.
        //Para corrigir total: 
            //#include <limits>
            //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        //Assim, ele ignora todos caracteres ate achar o proximo /n, limpando o buffer
    int age2;
    std::string fullName;
    std::cout << "Please type in your full name and age: " << std::endl;
    std::getline(std::cin, fullName);

    std::cin >> age2;

    std::cout << "Hello " << fullName << "! You are " << age2 << " years old!" << std::endl;

    return 0;
}