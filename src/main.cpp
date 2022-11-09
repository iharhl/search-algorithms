#include <vector>
#include <string>
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

    // Linear search
    searchType result_lin = linear_search(arr, NUMBER);  
    // Printout the result
    printOut(arr, result_lin, "Linear");

    // Sort the vector
    std::sort(arr.begin(), arr.end());

    // Jump search
    searchType result_jmp = jump_search(arr, NUMBER);  
    // Printout the result
    printOut(arr, result_jmp, "Jump");
    
    // Binary search
    searchType result_bin = binary_search(arr, NUMBER);
    // Prinout the result
    printOut(arr, result_bin, "Binary");

    // Ternary search
    searchType result_ter = ternary_search(arr, NUMBER);
    // Prinout the result
    printOut(arr, result_ter, "Ternary");

    return 0;
}