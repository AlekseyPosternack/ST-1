// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  bool is_prime = true;

  if (value == 0 || value == 1) {
    is_prime = false;
  }

  for (uint64_t i = 2; i * i <= value; ++i) {
    if (value % i == 0) {
      is_prime = false;
      break;
    }
  }
  return is_prime;
}

uint64_t nPrime(uint64_t n) {
  // вставьте код функции
  if (n == 0) {
    return 0;
  }

  uint64_t count = 0;
  uint64_t n_prime = 1;
  while (count != n) {
    n_prime++;
    if (checkPrime(n_prime)) {
      count++;
    }
  }
  return n_prime;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t next_prime = value;
  while (true) {
    next_prime++;
    if(checkPrime(next_prime)) {
      return next_prime;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
