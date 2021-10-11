#ifndef TOP_H
#define TOP_H

#include <math.h>

struct tops
{
    int x = 0;
    int y = 0;
};


class threeugla
{
private:
    double a , b , c ;
    double p ;
    double s ;
    double calcPerimetr();
    double calcSquare();
public:
    tops top1, top2, top3;
    double getPerimetr();
    double getSquare();
};

#endif // THREEUGLA_H
