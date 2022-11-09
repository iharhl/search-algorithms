#include "linear_search.hpp"

searchType linear_search(std::vector<int>& arr, int num)
{
    // Initialization
    int idx = -1;
    int iter = 0;
    searchType s;

    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        iter++;
        if (*i == num)
        {
            idx = --iter;
            break;
        }
    }

    // Resulted index and iterations count
    s.idx = idx;
    s.iter = iter;

    return s;
}