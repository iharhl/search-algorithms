#include "binary_search.hpp"

searchType binary_search(std::vector<int>& arr, int num)
{
    // Initialization
    int idx = -1;
    int iter = 0;
    int midIdx = 0;
    searchType s;

    // Size of the vector
    int N = arr.size();

    // Start (low), end (high) index
    int lowIdx = 0;
    int highIdx = N-1;

    while (iter < N)
    {
        iter++;
        midIdx = (lowIdx + highIdx) / 2;
        if (num == arr[midIdx])
        {
            idx = midIdx;
            break;
        } 
        else if (num > arr[midIdx]) 
        {
            lowIdx = midIdx + 1;
        } 
        else 
        {
            highIdx = midIdx - 1;
        }
    }

    // Resulted index and iterations count
    s.idx = idx;
    s.iter = iter;

    return s;
}