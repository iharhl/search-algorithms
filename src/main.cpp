#include <iostream>
#include <vector>
#include "generate_list.hpp"
#include "constants.hpp"

int main(){

    std::vector<int> arr(SIZE);
    generate_list(arr);

    std::cout << std::endl;
    return 0;
}