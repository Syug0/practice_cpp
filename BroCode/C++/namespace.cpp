#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}
int main(){

    //write your code here
    int x = 0;

    std::cout << first::x << std::endl;


    return 0;
    
}