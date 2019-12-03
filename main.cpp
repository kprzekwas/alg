//
//  main.cpp
//  alg1
//
//  Created by Kacper Przekwas on 29/10/2019.
//  Copyright © 2019 Kacper Przekwas. All rights reserved.
//
#include "sinus.hpp"

#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <math.h>





int main()
{
    using std::cout;
    using std::endl;
    

//    std::ofstream f1, f2, f3, f4, f5;
//    f1.open("/Users/kprzekwas/src/alg1/alg1/wynik1.txt");
//    f2.open("/Users/kprzekwas/src/alg1/alg1/wynik2.txt");
//    f3.open("/Users/kprzekwas/src/alg1/alg1/wynik3.txt");
//    f4.open("/Users/kprzekwas/src/alg1/alg1/wynik4.txt");
//    f5.open("/Users/kprzekwas/src/alg1/alg1/wynik5.txt");
//
//    double start = -M_PI;
//    double end = M_PI;
//    double add = (end - start) / 1000000;
//
//    long double sum1 = 0;
//    long double sum2 = 0;
//    long double sum3 = 0;
//    long double sum4 = 0;
////    long double sum5 = 0;
////    long double sum6 = 0;
////    long double sum7 = 0;
//
//    for (int i = 0; i < 1000; i++)
//    {
//        for (int j = 0; j <= 1000; j++) {
//            sum1 += abs((sin(start)) - (sin_taylor_first(start, 1)));
//            sum2 += abs((sin(start)) - (sin_taylor_last(start, 1)));
//            sum3 += abs((sin(start)) - (sin_sum_first(start, 1)));
//            sum4 += abs((sin(start)) - (sin_sum_last(start, 1)));
//            //sum5 += abs((sin(start)) - (sin_taylor_first(start, 96)));
//            //sum6 += abs((sin(start)) - (sin_taylor_first(start, 92)));
//            //sum7 += abs((sin(start)) - (sin_first(start, 89)));
//            //sum8 += abs((sin(start)) - (sin_first(start, 1)));
//            if (j == 1000) {
//                f1 << start << ";" << sum1 / 1000 << endl;
//                f2 << start << ";" << sum2 / 1000 << endl;
//                f3 << start << ";" << sum3 / 1000 << endl;
//                f4 << start << ";" << sum4 / 1000 << endl;
//                //f5 << start << ";" << sum5 / 2000 << ";" << sum6 / 2000 << ";" << sum7 / 2000 << ";" << sum8 / 2000 << endl;
//                sum1 = 0;
//                sum2 = 0;
//                sum3 = 0;
//                sum4 = 0;
//                //sum5 = 0;
//                //sum6 = 0;
//                //sum7 = 0;
//                //sum8 = 0;
//            }
//            start += add;
//        }
//    }
//    f1.close();
//    f2.close();
//    f3.close();
//    f4.close();
//    f5.close();

    
    cout << sin(-0.5) << endl;
    cout << sin_taylor_last(-0.5, 1) << endl;
    cout << sin_taylor_first(-0.5, 1) << endl;
    cout << sin_sum_first(-0.5, 1) << endl;
    cout << sin_sum_last(-0.5, 1) << endl;

}
