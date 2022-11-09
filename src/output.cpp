#include "output.hpp"

void printOut(std::vector<int>& arr, searchType& result, std::string srch)
{
    std::cout << "======================================================" << std::endl;
    std::cout << srch << " search output: number ";
    if (result.idx == -1)
    {
        std::cout << "not found in the list!" << std::endl;
    } 
    else 
    {
        std::cout << arr[result.idx] << " is found at index " << result.idx << std::endl;
        std::cout << "Number of iterations: " << result.iter << std::endl;
    }
    std::cout << "======================================================" << std::endl;    
}

using namespace sciplot; 

//Strings search_type = 0;