//
// Created by head4max on 22.01.2022.
//

#ifndef LESSON2_MATH_H
#define LESSON2_MATH_H

#endif //LESSON2_MATH_H

//using namespace std;
double sqr(double a);

double sqr(double a) {
    return a*a;
}

double rms(double a, double b, double c)
{
    return sqrt((sqr(a) + sqr(b) + sqr(c))/3);
}
double mean(double a, double b, double c)
{
    return (a + b + c)/3;
}