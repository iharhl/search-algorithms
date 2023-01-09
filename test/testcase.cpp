#include <gtest/gtest.h>
#include "linear_search.hpp"
#include "constants.hpp"

TEST(LinearSearchTest, test1)
{
    //arange
    std::vector<int> dummy_vector = {6,1,2,1,3,5};
    int search_target = 3;
    searchType result;
    //act
    result = linear_search(dummy_vector, search_target);
    //assert
    ASSERT_EQ(result.idx, 4);
    ASSERT_EQ(search_target, dummy_vector[result.idx]);
}

TEST(LinearSearchTest, test2)
{
    //arange
    std::vector<int> dummy_vector = {50,12,51,34,51,51};
    int search_target = 51;
    searchType result;
    //act
    result = linear_search(dummy_vector, search_target);
    //assert
    ASSERT_EQ(result.idx, 2);
    ASSERT_EQ(search_target, dummy_vector[result.idx]);
}

int main(int argc, char **argv) 
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}