#include "whattotest.cpp"
#include <gtest/gtest.h>

TEST(TestCaseName, TestName) {
	EXPECT_EQ(10, int(10));
	EXPECT_TRUE(true);
}
