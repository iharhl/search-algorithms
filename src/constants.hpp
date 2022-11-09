#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>
#include <vector>

static const int SIZE = 10000;      // size of the array
static const int NUMBER = 77;       // number to find
static const int RANDPOOL = 500;    // generate random array from 0 to RANDPOOL-1

// return type of search function
struct searchType {int idx; int iter;};

// for plotting
typedef std::vector<std::string> Strings;

#endif
