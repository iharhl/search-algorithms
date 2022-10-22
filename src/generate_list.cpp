#include "generate_list.hpp"

int random_number() {
    // std::srand(unsigned(std::time(0)));
    return (std::rand()%100);
}

void generate_list(std::vector<int>& randArray){

    std::srand(unsigned(std::time(nullptr)));
    std::generate(randArray.begin(), randArray.end(), random_number);    

    // for (auto i : randArray){
    //     randArray[i] = rand() % 100; // Number between 0 and 99
    // }

}