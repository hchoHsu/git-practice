#include <iostream>
using namespace std;

int main(){
    std::cout << "hello world!\n" << std::endl;
    std::cout << "new thing\n";
    std::cout << "WTF" << std::endl;
    
    
    std::cout << "I change it diract from github!" << std::endl;
    for(int i = 0; i < 10; i++) cout << i << endl;
    
    #ifdef DEBUG
    std::cout << "\nfor debug" << std::endl;
    int j;
    for(j = 0; j < 20; j++) cout << j << endl;
    #endif

    return 0;
}
