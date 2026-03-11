#include <iostream>
#include <string>
#include <cmath>
#include <vector>

int N = 2'000'000;

// Function that checks if an int x is prime or not
bool is_prime(int x){
    if(x == 2) return true;

    for(int i = 3; i <= int(sqrt(x)); i += 2){
        if(x % i == 0) return false;
    }
    return true;
}

// Function that returns all of the primes until a given upper limit
std::vector<int> get_primes(int max){
    if(max < 2) return {};

    std::vector<int> primes = {2};
    for(int i = 3; i <= max; i += 2){
        if(is_prime(i)) primes.push_back(i);
    }

    return primes;
}


int main(){
    std::vector<int> primes = get_primes(N);

    long int sum = 0;
    for(int prime : primes){
        sum += prime;
    }

    std::cout << "The sum of all the primes below 2 million is: " << sum << std::endl;

    return 0;
}