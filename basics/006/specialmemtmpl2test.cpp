#include "specialmemtmpl2.hpp"

int main(){
    std::string s = "sname";
    Person p1(s);
    Person p2("tmp");
    //Person p3(p1); // error!!

    Person p4(std::move(p1));
}