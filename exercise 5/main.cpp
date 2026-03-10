#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cmath>

int N = 20;

// Function that checks if an int x is prime or not
// Not used in the final implementation
bool is_prime(int x){
    if(x == 2) return true;

    for(int i = 3; i <= int(sqrt(x)); i += 2){
        if(x % i == 0) return false;
    }
    return true;
}

// Function that returns all of the primes until a given upper limit
// Not used in the final implementation
std::vector<int> get_primes(int max){
    std::vector<int> primes = {2};
    for(int i = 3; i <= max; i += 2){
        if(is_prime(i)) primes.push_back(i);
    }
    return primes;
}

// Function that gets the prime factors of an int x
// Not used in the final implementation
std::vector<int> get_prime_factors(int x, std::vector<int> primes){
    std::vector<int> prime_factors = {};
    
    int i = 0;
    while(true){
        int prime = primes[i];
        if(prime > x) break;

        if(x % prime == 0){
            x = x / prime;
            prime_factors.push_back(prime);
        }
        else{
            i++;
        }
    }
    return prime_factors;
}

int main(){
    long int smallest_num = 1;
    std::vector<int> nums = {};
    for(int i = 2; i <=N; i++){
        nums.push_back(i);
    }

    std::vector<int> prime_factors = {};
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1) continue;

        prime_factors.push_back(nums[i]);
        for(int j = i+1; j < nums.size(); j++){
            if(nums[j] % nums[i] == 0) nums[j] /= nums[i];
        }
    }
    
    for(int& n : prime_factors){
        std::cout << n << " ";
    }
    std::cout << std::endl;

    for(int n : prime_factors){
        smallest_num *= n;
    }
    
    std::cout << "The smallest multiple is" << smallest_num << std::endl;
    return 0;
}