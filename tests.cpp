#include "whattotest.cpp"
#include <gtest/gtest.h>

TEST(TestCaseName, TestName) {
  EXPECT_EQ(15, int(10));
  EXPECT_TRUE(true);
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
