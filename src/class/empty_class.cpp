#include <iostream>
class Empty{};
class IntClass{
public:
    int i;
};
int main(){
    Empty* ec = new Empty[3];
    IntClass* ic = new IntClass[3];
    
    for(int i=0;i<3;i++)
        std::cout << "Empty[" << i << "] address : " << &ec[i] << std::endl;
    std::cout << "sizeof Empty : " << sizeof(ec[0]) << std::endl;
    for(int i=0;i<3;i++)
        std::cout << "IntClass[" << i << "] address : " << &ic[i] << std::endl;
    std::cout << "sizeof Empty : " << sizeof(ic[0]) << std::endl;
    
}