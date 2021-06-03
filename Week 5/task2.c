#include <stdio.h>
#include <math.h>

double calcdist(double a[], double b[], int size);

int main(){

    double v_a[3] = {1, 1, 1};
    double v_b[3] = {0, 1, 1};
    double v_c[3] = {10, -3, -1};
    double v_d[3] = {6, 3, -5};
    double v_e[3] = {10, 3.1, 5.3};
    double v_f[3] = {-2, -3, 5.2};

    printf("%f\n", calcdist(v_a, v_b, 3));
    printf("%f\n", calcdist(v_c, v_d, 3));
    printf("%f\n", calcdist(v_e, v_f, 3));

    return 0;
}

double calcdist(double a[], double b[], int size){

    double sum;

    for (int i = 0; i < size; ++i) {
        sum += ((a[i]-b[i]) * (a[i]-b[i]));
    }

    return sqrt(sum);
}

