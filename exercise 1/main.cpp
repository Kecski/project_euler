#include <iostream>
#include <string>

int main(){
    int sum = 0;
    for(int i = 2; i < 1000; i++){
        if((i % 3 == 0) || (i % 5 == 0)) {sum += i;}
    }

    std::cout << "The sum is " << sum << std::endl;

    return 0;
}