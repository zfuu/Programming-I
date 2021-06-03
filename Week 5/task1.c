#include <stdio.h>

double calcinpro(double a[], double b[], int size);

int main(){

    double v_a[3] = {3, 1, 2};
    double v_b[3] = {-2, 5, 7};
    double v_c[3] = {3, -4, 8};
    double v_d[3] = {2, 1, 3};
    double v_e[3] = {5, -2, 2};
    double v_f[3] = {4, 2, -1};

    printf("%f\n", calcinpro(v_a, v_b, 3));
    printf("%f\n", calcinpro(v_c, v_d, 3));
    printf("%f\n", calcinpro(v_e, v_f, 3));

    return 0;
}

double calcinpro(double a[], double b[], int size){

    double output;
    for (int i = 0; i < size; ++i) {
        output += (a[i]*b[i]);
    }

    return output;
}

