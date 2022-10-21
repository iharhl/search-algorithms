#include "generate_list.hpp"

void generate_list(std::vector<int>& randArray){

    // initialize random seed
    srand(time(NULL));

    for (auto i : randArray){
        randArray[i] = rand() % 100; // Number between 0 and 99
        std::cout << randArray[i] << " ";
    }

}