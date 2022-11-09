#ifndef OUTPUT_H
#define OUTPUT_H

#include <vector>
#include <string>
#include <chrono>
#include <iostream>
#include <sciplot/sciplot.hpp>
#include "constants.hpp"

void printOut(std::vector<int>& arr, searchType result, std::string srch, std::chrono::microseconds duration);
void plotOut(Strings search_types, std::vector<int> iters);

#endif