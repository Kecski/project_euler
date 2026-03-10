#include <iostream>
#include <string>
#include <cmath>

bool is_prime(int x){
    if(x == 2) return true;

    for(int i = 3; i <= int(sqrt(x)); i += 2){
        if(x % i == 0) return false;
    }
    return true;
}


int main(){
    long int x = 600'851'475'143;
    int max = int(sqrt(x));
    int max_prime = 1;

    for(int i = max; i >= 2; i--){
        if(x % i == 0){
            if(is_prime(i)){
                max_prime = i;
                break;
            }
        }
    }

    std::cout << "The largest prime factor is " << max_prime << std::endl;
    return 0;
}