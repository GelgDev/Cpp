#include <iostream>

int main(){

    std::cout << "Hello World!" << std::endl;
    std::cout << "Number 1" << std::endl;
    
    std::cout << "teste: ";
    std::cout << "mesma linha, sem endl." << std::endl;  //mesma linha, pois nao tem endl
    
    int nome = 10;
    while (nome > 0)
    {
        std::cout << nome << ": Davi Barcellos de Lucca" << std::endl;
        nome--;
    }

    
    
    return 0;
}