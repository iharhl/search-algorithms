#include "linear_search.hpp"

void linear_search(std::vector<int>& arr, int num, searchType& s)
{
    int idx = -1;
    int iter = 0;

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
}