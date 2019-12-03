//
//  sinus.hpp
//  alg1
//
//  Created by Kacper Przekwas on 03/12/2019.
//  Copyright © 2019 Kacper Przekwas. All rights reserved.
//

#ifndef sinus_hpp
#define sinus_hpp


// funckja licząca potęgę x do n
long double power_function(long double x, long double n);

// funkcja licząca silnie z liczby x
long double factorial(long double x);

// funkcja obliczająca sin x wzorem Taylora sumując od przodu
long double sin_taylor_first(long double x, int n);

// funkcja obliczająca sin x wzorem Taylora sumując od tyłu
long double sin_taylor_last(long double x, int n);

// funkcja obliczająca sin x obliczając sumę na podstawie poprzeniego składnika od przodu
long double sin_sum_first(long double x, int n);

// funkcja obliczająca sin x obliczając sumę na podstawie poprzeniego składnika od tyłu.
long double sin_sum_last(long double x, int n);

#endif /* sinus_hpp */

