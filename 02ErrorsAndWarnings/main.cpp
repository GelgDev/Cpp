#include <iostream>

int main(){


    //Compile time error
    //std::cout << "Compile time error: sem ; no final" << std::endl
    //Nao temos ; ao final, compilar da erro.


    //Run time error
    int erro = 7/0; 
    // compila corretamente, mas tem um erro pois divisao por 0 nao é correto. 
    

    //Waring
    std::cout << "erro: " << erro << std::endl;
    //Ao tentar printar o resultado de uma divisão por 0 nao obtemos nada, mas temos um aviso na aba PROBLEMS: division by zero [-Wdiv-by-zero]
    /*
        [{
            "resource": "/c:/Repos/Cpp/02ErrorsAndWarnings/main.cpp",
            "owner": "cpptools",
            "severity": 4,
            "message": "division by zero [-Wdiv-by-zero]",
            "source": "gcc",
            "startLineNumber": 10,
            "startColumn": 17,
            "endLineNumber": 10,
            "endColumn": 17
        }]
    */


    return 0;
}