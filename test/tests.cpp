// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime1) {
  bool res = checkPrime(0);
  EXPECT_FALSE(res);
}
TEST(st1, checkPrime2) {
  bool res = checkPrime(1);
  EXPECT_FALSE(res);
}
TEST(st1, checkPrime3) {
  bool res = checkPrime(4);
  EXPECT_FALSE(res);
}
TEST(st1, checkPrime4) {
  bool res = checkPrime(5);
  EXPECT_TRUE(res);
}
TEST(st1, checkPrime5) {
  bool res = checkPrime(23);
  EXPECT_TRUE(res);
}


TEST(st1, nPrime1) {
  EXPECT_ANY_THROW(nPrime(0));
}
TEST(st1, nPrime2) {
  uint64_t res = nPrime(1);
  EXPECT_EQ(2, res);
}
TEST(st1, nPrime3) {
  uint64_t res = nPrime(4);
  EXPECT_EQ(7, res);
}
TEST(st1, nPrime4) {
  uint64_t res = nPrime(5);
  EXPECT_EQ(11, res);
}
TEST(st1, nPrime5) {
  uint64_t res = nPrime(23);
  EXPECT_EQ(83, res);
}


TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(0);
  EXPECT_EQ(2, res);
}
TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(1);
  EXPECT_EQ(2, res);
}
TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(4);
  EXPECT_EQ(5, res);
}
TEST(st1, nextPrime4) {
  uint64_t res = nextPrime(5);
  EXPECT_EQ(7, res);
}
TEST(st1, nextPrime5) {
  uint64_t res = nextPrime(23);
  EXPECT_EQ(29, res);
}


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(0);
  EXPECT_EQ(0, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(1);
  EXPECT_EQ(0, res);
}
TEST(st1, sumtPrime3) {
  uint64_t res = sumPrime(4);
  EXPECT_EQ(5, res);
}
TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(5);
  EXPECT_EQ(5, res);
}
TEST(st1, sumPrime5) {
  uint64_t res = sumPrime(23);
  EXPECT_EQ(77, res);
}
