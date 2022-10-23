#include "generate_list.hpp"

int random_number() {
    return (std::rand() % RANDPOOL);
}

void generate_list(std::vector<int>& randArray){
    std::srand(unsigned(std::time(nullptr)));
    std::generate(randArray.begin(), randArray.end(), random_number);
}