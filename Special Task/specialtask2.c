#include <stdio.h>
#include <math.h>

//The comment hints at finding the value by trapezoidal estimation, 
//so the integral over 1 to 3 will be estimated by using the trapezoidal rule with 10 intervals.
double originalf(double x){
    return x*x*x;
}

double trapezoidArea(double base1, double base2, double height){
    return 0.5*(base1+base2)*height;
}

double integrate(double a, double b, int interval){
    double step = (b-a)/interval;
    double x1 = a;
    double x2 = a+step;
    double y1, y2, integral = 0;
    while(x2<=b){
        y1 = originalf(x1);
        y2 = originalf(x2);
        integral += trapezoidArea(y1, y2, step);
        x1 = x2;
        x2 += step;
    }
    return integral;
}

int main(){

    printf("result: %f\n", integrate(2,0,10));

    return 0;
}
