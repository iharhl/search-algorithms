#include <iostream>
#include <vector>
#include "generate_list.hpp"
#include "constants.hpp"
#include "linear_search.hpp"
#include "binary_search.hpp"

int main(){

    // Array init
    std::vector<int> arr(SIZE);

    // Init
    searchType result;
    int idx;
    int num = 87;

    // Generate random list
    generate_list(arr);

    // Printout random array
    // for (int i{0}; i < SIZE; i++){
    //     std::cout << arr[i] << " ";
    // }
    // std::cout << std::endl;

    // Linear search
    linear_search(arr, num, result);
    if (result.idx == -1){
        std::cout << "No such number in the list!";
    } else {
        std::cout << "======================================================" << std::endl;
        std::cout << "Linear search output: number index at index " << result.idx << std::endl;
        std::cout << "Number of iterations: " << result.iter << std::endl;
        std::cout << "======================================================" << std::endl;
    }

    // Binary search
    binary_search(arr, num, result);
    if (result.idx == -1){
        std::cout << "No such number in the list!";
    } else {
        std::cout << "======================================================" << std::endl;
        std::cout << "Binary search output: number index at index " << result.idx << std::endl;
        std::cout << "Number of iterations: " << result.iter << std::endl;
        std::cout << "======================================================" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}