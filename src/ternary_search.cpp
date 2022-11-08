#include "ternary_search.hpp"

void ternary_search(std::vector<int>& arr, int num, searchType& s)
{
    // Initialization
    int idx = -1;
    int iter = 0;
    int midIdx1 = 0;
    int midIdx2 = 0;

    // Size of the vector
    int N = arr.size();

    // Left (low) and right (high) initial index
    int lowIdx = 0;
    int highIdx = N-1;

    // Sort the vector
    std::sort(arr.begin(), arr.end());

    while (iter < N)
    {
        iter++;

        midIdx1 = lowIdx + (highIdx - lowIdx) / 3;
        midIdx2 = highIdx - (highIdx - lowIdx) / 3;

        if (num == arr[midIdx1])
        {
            idx = midIdx1;
            break;
        } 
        else if (num == arr[midIdx1])
        {
            idx = midIdx2;
            break;
        } 
        else if (num < arr[midIdx1]) 
        {
            highIdx = midIdx1 - 1;
        } 
        else if (num > arr[midIdx2])
        {
            lowIdx = midIdx2 + 1;
        }
        else
        {
            lowIdx = midIdx1 + 1;
            highIdx = midIdx2 - 1;
        }
    }

    // Resulted index and iterations count
    s.idx = idx;
    s.iter = iter;
}