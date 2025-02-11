#ifndef QUADRATICROOTS_H_
#define QUADRATICROOTS_H_

struct QuadraticRootsResult
{
    long double x1;
    long double x2;
    int norealroots;
};

struct QuadraticRootsResult findroots(long double a, long double b, long double c);

#endif