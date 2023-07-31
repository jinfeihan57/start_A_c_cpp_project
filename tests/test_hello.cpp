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

TEST(Sum, IsOdd5) {
    int a = 10;
    int b = 11;
    int c = Sum(a, b);
    EXPECT_EQ(c, 21);
    a = 20;
    b = 23;
    EXPECT_EQ(Sum(a, b), 43);
}