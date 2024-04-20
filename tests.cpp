#include "whattotest.cpp"
#include <gtest/gtest.h>

TEST(AddTest, PositiveNumbers) { 
    ASSERT_EQ(10, add(5));
    ASSERT_EQ(15, add(10));
}

TEST(AddTest, NegativeNumbers) {
    ASSERT_EQ(0, add(-5));
    ASSERT_EQ(-3, add(-8));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

