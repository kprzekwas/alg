//
//  sinus.cpp
//  alg1
//
//  Created by Kacper Przekwas on 03/12/2019.
//  Copyright © 2019 Kacper Przekwas. All rights reserved.
//

#include "sinus.hpp"

#include <iostream>
#include <vector>



long double power_function(long double x, long double n)
{
    long double result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }
    return result;
}

long double factorial(long double x)
{
    long double result = 1;
    for (int i = 2; i <= x; i++)
    {
        result = result * i;
    }
    return result;
}


long double sin_taylor_first(long double x, int n)
{
    long double sum = 0;
    long double i = 0;
    long double f = 1;
    long double nominator;
    long double denominator;
    long double w;
    do
    {
        nominator = f * power_function(x, (2 * i) + 1);
        f *= -1;
        denominator = factorial((2 * i) + 1);
        w = nominator / denominator;
        sum += w;
        i++;
        n++;
    } while (n <= 25);
    return sum;
}

long double sin_taylor_last(long double x, int n)
{
    std::vector < long double > tab;
    long double sum = 0;
    long double i = 0;
    long double f = 1;
    long double nominator;
    long double denominator;
    long double w;
    do
    {
        nominator = f * power_function(x, (2 * i) + 1);
        f *= -1;
        denominator = factorial((2 * i) + 1);
        w = nominator / denominator;
        tab.push_back(w);
        i++;
        n++;
    } while (n < 25);
    for (int i = tab.size() - 1; i >= 0; i--)
    {
        sum += tab[i];
    }
    tab.clear();
    return sum;
}
long double sin_sum_first(long double x, int n)
{
    long double sum = 0;
    long double i = 0;
    long double nominator = -1;
    long double denominator;
    long double w;
    nominator *= -1 * x;
    denominator = factorial(2 * i + 1);
    w = nominator / denominator;
    sum = w;
    i++;
    do
    {
        nominator *= -1 * x * x;
        denominator *= 2 * i * (2 * i + 1);
        w = nominator / denominator;
        sum += w;
        i++;
        n++;
    } while (n < 25);
    return sum;
}

long double sin_sum_last(long double x, int n)
{
    std::vector < long double > tab;
    long double sum = 0;
    long double i = 0;
    long double nominator = -1;
    long double denominator;
    long double w;
    nominator *= -1 * x;
    denominator = factorial(2 * i + 1);
    w = nominator / denominator;
    sum = w;
    i++;
    do
    {
        nominator *= -1 * x * x;
        denominator *= 2 * i * (2 * i + 1);
        w = nominator / denominator;
        tab.push_back(w);
        i++;
        n++;
    } while (n < 25);
    for (int i = tab.size() - 1; i >= 0; i--)
        sum += tab[i];
    tab.clear();
    return sum;
}

