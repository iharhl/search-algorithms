#include <vector>
#include <string>
#include <chrono>
#include <iostream>
#include <memory>
#include "generate_list.hpp"
#include "constants.hpp"
#include "linear_search.hpp"
#include "binary_search.hpp"
#include "ternary_search.hpp"
#include "jump_search.hpp"
#include "output.hpp"
#include "benchmark.hpp"

int main()
{
    // Initialize vector
    std::vector<int> arr(SIZE);

    // Generate random list of numbers
    generate_list(arr);

    // Allocate memory for storing the duration
    size_t duration;

    //----- Linear search
    searchType result_lin;
    std::shared_ptr<size_t> duration_lin = std::make_shared<size_t>(duration);
    {
        Timer time(duration_lin);
        result_lin = linear_search(arr, NUMBER);
    }
    // Printout the result
    printOut(arr, result_lin, "Linear", *duration_lin);

    //----- Sort the vector
    std::shared_ptr<size_t> duration_sort = std::make_shared<size_t>(duration);
    {
        Timer time(duration_sort);
        std::sort(arr.begin(), arr.end());
    }
    std::cout << "\nDuration of sorting the array [ns]: " << *duration_sort << "\n" << std::endl;

    //----- Jump search
    searchType result_jmp;
    std::shared_ptr<size_t> duration_jmp = std::make_shared<size_t>(duration);
    {
        Timer time(duration_jmp);
        result_jmp = jump_search(arr, NUMBER);  
    }
    // Printout the result
    printOut(arr, result_jmp, "Jump", *duration_jmp);
    

    //----- Binary search
    searchType result_bin;
    std::shared_ptr<size_t> duration_bin = std::make_shared<size_t>(duration);
    {
        Timer time(duration_bin);
        result_bin = binary_search(arr, NUMBER);
    }
    // Prinout the result
    printOut(arr, result_bin, "Binary", *duration_bin);


    //----- Ternary search
    searchType result_ter;
    std::shared_ptr<size_t> duration_ter = std::make_shared<size_t>(duration);
    {
        Timer time(duration_ter);
        result_ter = ternary_search(arr, NUMBER);
    }
    // Prinout the result
    printOut(arr, result_ter, "Ternary", *duration_ter);

    // Plot
    Strings search_types = {"Linear", "Jump", "Binary", "Ternary"};
    std::vector<int> iters = {result_lin.iter, result_jmp.iter, result_bin.iter, result_ter.iter};
    plotOut(search_types, iters);

    return 0;
}