#include <iostream>
#include <string>

int MAX = 4'000'000;

bool is_even(int x){
    if(x % 2 == 0) return true;
    else return false;
}


int main(){
    int f_a = 1;
    int f_b = 2;
    int sum = 2;

    while(true){
        int f_i = f_a + f_b;
        if(f_i > MAX) break;

        f_a = f_b;
        f_b = f_i;
        if(is_even(f_b)) sum += f_b;
    }

    std::cout << "The sum of the odd Fibonacci numbers is " << sum << std::endl;

    return 0;
}