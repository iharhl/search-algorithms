#include "binary_search.hpp"

// TODO
void binary_search(std::vector<int>& arr, int num, searchType& s){

    int idx = -1;
    int iter = 0;
    int midIdx = 0;

    // Size of the vector
    int N = sizeof(arr) / sizeof(arr[0]);

    int lowIdx = 0;
    int highIdx = N-1;

    while (true){
        midIdx = (lowIdx + highIdx) / 2;
        if (num == arr[midIdx]){
            idx = midIdx;
            break;
        } else if (num > arr[midIdx]) {
            lowIdx = midIdx + 1;
        } else {
            highIdx = midIdx - 1;
        }
        iter++;
        
        if (iter > N){
            break;
        }
    }

    // Resulted index and iterations count
    s.idx = idx;
    s.iter = idx;

}