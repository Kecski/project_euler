#include <iostream>
#include <string>
#include <vector>

int N = 100;

int main(){
    long int diff = 0;

    // std::vector<int> nums;
    // for(int i = 1; i <= N; i++){
    //     nums.push_back(i);
    // }

    for(int i = 1; i <= N; i++){
        for(int j = i+1; j <= N; j++){
            diff += 2*i*j;
        }
    }

    std::cout << diff << std::endl;
    return 0;
}