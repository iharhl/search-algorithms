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
    // Array init
    std::vector<int> arr(SIZE);

    // Init
    searchType result;
    int idx;

    // Generate random list
    generate_list(arr);

    // Linear search
    linear_search(arr, NUMBER, result);  
    // Printout the result
    printOut(arr, result, "Linear");

    // Jump search
    jump_search(arr, NUMBER, result);  
    // Printout the result
    printOut(arr, result, "Jump");
    
    // Binary search
    binary_search(arr, NUMBER, result);
    // Prinout the result
    printOut(arr, result, "Binary");

    // Ternary search
    ternary_search(arr, NUMBER, result);
    // Prinout the result
    printOut(arr, result, "Ternary");

    return 0;
}