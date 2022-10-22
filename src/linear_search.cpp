#include "linear_search.hpp"

void linear_search(std::vector<int>& arr, int num, searchType& s){

    int idx = -1;

    for (auto i : arr){
        if (arr[i] == num){
            idx = i;
            break;
        }
    }

    // Resulted index and iterations count
    s.idx = idx;
    s.iter = idx;

}