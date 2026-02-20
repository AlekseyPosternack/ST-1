// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

// CheckPrime функциональные тесты
TEST(st1, checkPrime_functional) {
  EXPECT_TRUE(checkPrime(97));
  EXPECT_FALSE(checkPrime(100));
  EXPECT_TRUE(checkPrime(101));
  EXPECT_FALSE(checkPrime(121)); 
}

// CheckPrime граничные тесты
TEST(st1, checkPrime_range) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
}

// nPrime тесты
TEST(st1, nPrime) {
  EXPECT_EQ(nPrime(0), 0);
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(25), 97);
  EXPECT_EQ(nPrime(26), 101);
}

// nextPrime тесты
TEST(st1, nextPrime) {
  EXPECT_EQ(nextPrime(0), 2);
  EXPECT_EQ(nextPrime(1), 2);
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(3), 5);
  EXPECT_EQ(nextPrime(25), 29);
  EXPECT_EQ(nextPrime(26), 29);
  EXPECT_EQ(nextPrime(100), 101);
}

// sumPrime граничные тесты
TEST(st1, sumPrime_range) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(1), 0);
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(3), 2);
}
