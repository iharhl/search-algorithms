#include "jump_search.hpp"

searchType jump_search(std::vector<int>& arr, int num)
{
    // Initialization
    int idx = -1;
    int iter = 0;
    int prev = 0; 
    searchType s; 

    // Size of the vector
    int N = arr.size();

    // Finding block size to be jumped
    int step = std::sqrt(N);

    /* Finding the block where element is
    present (if it is present) */
    while (arr[std::min(step, N)-1] < num)
    {
        iter++;
        prev = step;
        step += std::sqrt(N);

        if (prev >= N)
        {
            break;
        }
    }

    // Doing a linear search for x in the block
    while (arr[prev] < num)
    {
        iter++;
        prev++;

        // If we reached next block or end of
        // array, element is not present.
        if (prev == std::min(step, N))
        {
            break;
        }
    }

    // If found
    if (arr[prev] == num)
    {
        idx = prev;
    }

    // Resulted index and iterations count
    s.idx = idx;
    s.iter = iter;

    return s;
}