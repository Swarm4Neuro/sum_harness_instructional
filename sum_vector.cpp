#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>
#include "sums.h"

void 
setup(int64_t N, int64_t A[])
{  
   for(int64_t i = 0; i < N; i++){
      A[i] = i;
   }
   printf(" inside sum_vector problem_setup, N=%lld \n", N);
}

int64_t
sum(int64_t N, int64_t A[])
{
   int64_t result = 0;
   for(int64_t i = 0; i < N; i++){
      result += A[i];
   }
   printf(" inside sum_vector perform_sum, N=%lld \n", N);
   return result;
}

