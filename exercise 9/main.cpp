#include <iostream>
#include <string>

int N = 1000;

bool is_pythagorean(int a, int b, int c){
    if(a * a + b * b == c * c) return true;
    return false;
}

int main(){
    for(int a = 1; a <= N/2 - 1; a++){
        for(int b = a+1; b <= N/2; b++){
            int c = N - a - b;
            if(is_pythagorean(a, b, c)){
                std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
                std::cout << "a * b * c = " << a * b * c << std::endl;
            }
        }
    }

    return 0;
}