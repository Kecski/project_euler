#include <iostream>
#include <string>

bool is_palindromic(int x){
    std::string x_string = std::to_string(x);
    int length = x_string.length();

    for(int i = 0; i < length; i++){
        if(x_string[i] != x_string[length-i-1]) return false;
    }
    return true;
}


int main(){
    int max_palindromic = 0;

    for(int i = 100; i < 1'000; i++){
        for(int j = i; j < 1'000; j++){
            int prod = i * j;

            if(is_palindromic(prod)){
                if(prod > max_palindromic){
                    max_palindromic = prod;
                }
            }
        }
    }

    std::cout << "The largest palindrome made from the product of two 3-digit numbers is: " << max_palindromic << std::endl;
    
    return 0;
}