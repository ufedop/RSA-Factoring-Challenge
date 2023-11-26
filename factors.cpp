#include "factors.h"
#include <iostream>
#include <fstream>
#include <cmath>

std::vector<std::pair<int, int>> factorize(int number) {
    std::vector<std::pair<int, int>> factors;
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
	    factors.emplace_back(i, number / i);
        }
