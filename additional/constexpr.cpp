#include <iostream>
#include <array>
#include <cstring>

int main(){
    int sz;
    constexpr int arraySize1 = sz; //error!!
    const int arraySize2 = sz; // fine
    
    std::cout << arraySize1 << '\n';
}