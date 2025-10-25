#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>
#include "sums.h"

static std::vector<int64_t> idx;

void 
setup(int64_t N, int64_t A[])
{  
   for(int64_t i =0; i < N; i++){
      A[i] = i;
   }
   idx.resize(N);
   std::mt19937 gen(12345); //generate a static seed for the index
   std::uniform_int_distribution<int64_t> dist(0, N - 1); 
   for(int64_t i =0; i < N; i++){
      idx[i] = dist(gen);
   }
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
}

int64_t
sum(int64_t N, int64_t A[])
{  
   int64_t result = 0;
   for(int64_t i = 0; i < N; i++){
      result += A[idx[i]];
   }
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);

   return result;
}

