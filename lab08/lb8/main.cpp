#include "header.h"
#include <math.h>

double s_calculation(double x,double y,double z)
{
    double s;
    s = sin(x) / sqrt(abs((y*z) / x + y)) + 3 * pow(y, 5);
    return s;
}
