#include <vector>
#include <string>
#include <chrono>
#include <iostream>
#include "generate_list.hpp"
#include "constants.hpp"
#include "linear_search.hpp"
#include "binary_search.hpp"
#include "ternary_search.hpp"
#include "jump_search.hpp"
#include "output.hpp"

int main()
{
    // Init
    std::vector<int> arr(SIZE);
    int idx;

    // Generate random list of numbers
    generate_list(arr);

    //----- Linear search
    auto start = std::chrono::high_resolution_clock::now();

    searchType result_lin = linear_search(arr, NUMBER);  

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration_lin = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    // Printout the result
    printOut(arr, result_lin, "Linear", duration_lin);

    // Sort the vector
    start = std::chrono::high_resolution_clock::now();
    std::sort(arr.begin(), arr.end());
    stop = std::chrono::high_resolution_clock::now();
    auto duration_sort = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "\nDuration of sorting the array [us]: " << duration_sort.count() << "\n" << std::endl;

    //----- Jump search
    start = std::chrono::high_resolution_clock::now();

    searchType result_jmp = jump_search(arr, NUMBER);  

    stop = std::chrono::high_resolution_clock::now();
    auto duration_jmp = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    // Printout the result
    printOut(arr, result_jmp, "Jump", duration_jmp);
    
    //----- Binary search
    start = std::chrono::high_resolution_clock::now();

    searchType result_bin = binary_search(arr, NUMBER);

    stop = std::chrono::high_resolution_clock::now();
    auto duration_bin = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    // Prinout the result
    printOut(arr, result_bin, "Binary", duration_bin);

    //----- Ternary search
    start = std::chrono::high_resolution_clock::now();

    searchType result_ter = ternary_search(arr, NUMBER);

    stop = std::chrono::high_resolution_clock::now();
    auto duration_ter = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    // Prinout the result
    printOut(arr, result_ter, "Ternary", duration_ter);

    // Plot
    Strings search_types = {"Linear", "Jump", "Binary", "Ternary"};
    std::vector<int> iters = {result_lin.iter, result_jmp.iter, result_bin.iter, result_ter.iter};
    plotOut(search_types, iters);

    return 0;
}