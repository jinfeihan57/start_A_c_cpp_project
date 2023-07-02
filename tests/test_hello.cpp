#include "hello/hello.h"
#include "hello/hello1.h"

#include "gtest/gtest.h"

TEST(Hello, Hello0) {
    EXPECT_EQ(0, Hello());

}
TEST(IsOdd, IsOdd3) {
    EXPECT_TRUE(IsOdd(3));

}
TEST(IsOdd, IsOdd5) {
    EXPECT_TRUE(IsOdd(5)) << "5 is not odd!";

}
