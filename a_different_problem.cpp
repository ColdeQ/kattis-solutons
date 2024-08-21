#include <iostream>
#include <cstdlib>

int main(){
    

    long long x;
    long long y;

    while(std::cin >> x >> y){
        std::cout << std::abs(x - y) << std::endl;
    }

}