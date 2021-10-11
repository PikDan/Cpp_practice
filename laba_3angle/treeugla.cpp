#include "threeugla.h"

double threeugla::getPerimetr()
{
    return calcPerimetr();
}
double threeugla::getSquare()
{
    return calcSquare();
}
double threeugla::calcPerimetr()
{
     a = sqrt(pow(top2.x - top1.x, 2) + pow(top2.y - top1.y, 2));
     b = sqrt(pow(top3.x - top2.x, 2) + pow(top3.y - top2.y, 2));
     c = sqrt(pow(top1.x - top3.x, 2) + pow(top1.y - top3.y, 2));
     p = a + b + c;
     return p;
}
double threeugla::calcSquare()
{
    p = calcPerimetr();
    double half_p = p/2;
    s = sqrt(half_p*(half_p - a) * (half_p - b) * (half_p - c));
    return s;
}
