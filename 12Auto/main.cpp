#include <iostream>
#include <string>

int main(){
    
    //word that let the compiler deduce the type
    auto var1 {12}; //int
    auto var2 {13.0}; //double
    auto var3 {14.0f}; //float
    auto var4 {15.0l}; //long
    auto var5 {'e'}; //char

    //int modifier suffixes
    auto var6 {123u}; //unsigned
    auto var7 {123ul}; //unsigned long
    auto var8 {123ll}; //long long

    std::cout << "size of var1: " << sizeof(var1) << " bytes"<< std::endl;
    std::cout << "size of var2: " << sizeof(var2) << " bytes"<< std::endl;
    std::cout << "size of var3: " << sizeof(var3) << " bytes"<< std::endl;
    std::cout << "size of var4: " << sizeof(var4) << " bytes"<< std::endl;
    std::cout << "size of var5: " << sizeof(var5) << " bytes"<< std::endl;
    std::cout << "size of var6: " << sizeof(var6) << " bytes"<< std::endl;
    std::cout << "size of var7: " << sizeof(var7) << " bytes"<< std::endl;
    std::cout << "size of var8: " << sizeof(var8) << " bytes"<< std::endl;

    return 0;
}