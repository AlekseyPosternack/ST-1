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
TEST(st1, checkPrime_functional1) {
  EXPECT_TRUE(checkPrime(97));
}

TEST(st1, checkPrime_functional2) {
  EXPECT_FALSE(checkPrime(100));
}

TEST(st1, checkPrime_functional3) {
  EXPECT_TRUE(checkPrime(101));
}

TEST(st1, checkPrime_functional4) {
  EXPECT_FALSE(checkPrime(121));
}

// CheckPrime граничные тесты
TEST(st1, checkPrime_range1) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, checkPrime_range2) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime_range3) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime_range4) {
  EXPECT_TRUE(checkPrime(3));
}

TEST(st1, checkPrime_range5) {
  EXPECT_FALSE(checkPrime(4));
}

// nPrime тесты
TEST(st1, nPrime1) {
  uint64_t res = nPrime(0);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime2) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime3) {
  uint64_t res = nPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime4) {
  uint64_t res = nPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime5) {
  uint64_t res = nPrime(25);
  uint64_t expected = 97;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime6) {
  uint64_t res = nPrime(26);
  uint64_t expected = 101;
  EXPECT_EQ(expected, res);
}

// nextPrime тесты
TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(0);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime4) {
  uint64_t res = nextPrime(3);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime5) {
  uint64_t res = nextPrime(25);
  uint64_t expected = 29;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime6) {
  uint64_t res = nextPrime(26);
  uint64_t expected = 29;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime7) {
  uint64_t res = nextPrime(100);
  uint64_t expected = 101;
  EXPECT_EQ(expected, res);
}

// sumPrime граничные тесты
TEST(st1, sumPrime_range1) {
  uint64_t res = sumPrime(0);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime_range2) {
  uint64_t res = sumPrime(1);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime_range3) {
  uint64_t res = sumPrime(2);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime_range4) {
  uint64_t res = sumPrime(3);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}
