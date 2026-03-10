#include <iostream>
#include <string>

int N = 10'001;

bool is_prime(int x){
    if(x == 2) return true;

    for(int i = 3; i <= int(sqrt(x)); i += 2){
        if(x % i == 0) return false;
    }
    return true;
}

int find_nth_prime(int n){
    if(n == 1){
        return 2;
    }

    int counter = 1;
    int i = 3;

    while(true){
        if(is_prime(i)){
            counter++;
            if(counter == n) return i;
        }
        i += 2;
    }

}

int main(){
    int nth_prime = find_nth_prime(N);
    
    std::cout << "The 10'001st prime is " << nth_prime << std::endl;

    return 0;
}