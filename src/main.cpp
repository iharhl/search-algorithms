#include <iostream>
#include <vector>
#include <string>
#include "generate_list.hpp"
#include "constants.hpp"
#include "linear_search.hpp"
#include "binary_search.hpp"

void printOut(std::vector<int>& arr, searchType& result, std::string srch){
    std::cout << "======================================================" << std::endl;
    std::cout << srch << " search output: number ";
    if (result.idx == -1){
        std::cout << "not found in the list!" << std::endl;
    } else {
        std::cout << arr[result.idx] << " is found at index " << result.idx << std::endl;
        std::cout << "Number of iterations: " << result.iter << std::endl;
    }
    std::cout << "======================================================" << std::endl;    
}

int main(){

    // Array init
    std::vector<int> arr(SIZE);

    // Init
    searchType result;
    int idx;
    int num = 99;

    // Generate random list
    generate_list(arr);

    // Linear search
    linear_search(arr, num, result);  
    // Printout the result
    printOut(arr, result, "Linear");
    
    // Binary search
    binary_search(arr, num, result);
    // Prinout the result
    printOut(arr, result, "Binary");

    std::cout << std::endl;
    return 0;
}