#include <stdio.h>
#include <stdlib.h>
#include "vpl.h"

void ex_vpl_op_scal() {
    void *a = malloc(sizeof(double));
    double b = 2;

    VPL_OP_SCAL(a, 0, double, =);
    printf("(a, b) = (%f, %f) \n", VPL_VALUE(a, double), b);

    VPL_OP_SCAL(a, b, double, =);
    printf("(a, b) = (%f, %f) \n", VPL_VALUE(a, double), b);

    printf("%f + %f = ", VPL_VALUE(a, double), b);
    VPL_OP_SCAL(a, b, double, +=);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f - %f = ", VPL_VALUE(a, double), b);
    VPL_OP_SCAL(a, b, double, -=);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f * %f = ", VPL_VALUE(a, double), b);
    VPL_OP_SCAL(a, b, double, *=);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f / %f = ", VPL_VALUE(a, double), b);
    VPL_OP_SCAL(a, b, double, /=);
    printf("%f\n\n", VPL_VALUE(a, double));

    free(a);
}

void ex_vpl_op1() {
    void *a = malloc(sizeof(double));
    void *b = malloc(sizeof(double));

    VPL_OP_SCAL(a, 0, double, =);
    VPL_OP_SCAL(b, 3, double, =);
    printf("(a, b) = (%f, %f) \n", VPL_VALUE(a, double), VPL_VALUE(b, double));

    VPL_OP1(a, b, double, =);
    printf("(a, b) = (%f, %f) \n", VPL_VALUE(a, double), VPL_VALUE(b, double));

    printf("%f + %f = ", VPL_VALUE(a, double), VPL_VALUE(b, double));
    VPL_OP1(a, b, double, +=);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f - %f = ", VPL_VALUE(a, double), VPL_VALUE(b, double));
    VPL_OP1(a, b, double, -=);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f * %f = ", VPL_VALUE(a, double), VPL_VALUE(b, double));
    VPL_OP1(a, b, double, *=);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f / %f = ", VPL_VALUE(a, double), VPL_VALUE(b, double));
    VPL_OP1(a, b, double, /=);
    printf("%f\n\n", VPL_VALUE(a, double));

    free(a);
    free(b);
}

void ex_vpl_op2() {
    void *a = malloc(sizeof(float));
    void *b = malloc(sizeof(int));

    VPL_OP_SCAL(a, 0, float, =);
    VPL_OP_SCAL(b, 4, int, =);
    printf("(a, b) = (%f, %d) \n", VPL_VALUE(a, float), VPL_VALUE(b, int));

    VPL_OP2(a, b, float, int, =);
    printf("(a, b) = (%f, %d) \n", VPL_VALUE(a, float), VPL_VALUE(b, int));

    printf("%f + %d = ", VPL_VALUE(a, float), VPL_VALUE(b, int));
    VPL_OP2(a, b, float, int, +=);
    printf("%f\n", VPL_VALUE(a, float));

    printf("%f - %d = ", VPL_VALUE(a, float), VPL_VALUE(b, int));
    VPL_OP2(a, b, float, int, -=);
    printf("%f\n", VPL_VALUE(a, float));

    printf("%f * %d = ", VPL_VALUE(a, float), VPL_VALUE(b, int));
    VPL_OP2(a, b, float, int, *=);
    printf("%f\n", VPL_VALUE(a, float));

    printf("%f / %d = ", VPL_VALUE(a, float), VPL_VALUE(b, int));
    VPL_OP2(a, b, float, int, /=);
    printf("%f\n\n", VPL_VALUE(a, float));

    free(a);
    free(b);
}

void ex_vpl_scal() {
    void *a = malloc(sizeof(double));
    double b = 5;

    VPL_ASIGN_SCAL(a, 0, double);
    printf("(a, b) = (%f, %f) \n", VPL_VALUE(a, double), b);

    VPL_ASIGN_SCAL(a, b, double);
    printf("(a, b) = (%f, %f) \n", VPL_VALUE(a, double), b);

    printf("%f + %f = ", VPL_VALUE(a, double), b);
    VPL_ADD_SCAL(a, b, double);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f - %f = ", VPL_VALUE(a, double), b);
    VPL_SUB_SCAL(a, b, double);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f * %f = ", VPL_VALUE(a, double), b);
    VPL_MUL_SCAL(a, b, double);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f / %f = ", VPL_VALUE(a, double), b);
    VPL_DIV_SCAL(a, b, double);
    printf("%f\n\n", VPL_VALUE(a, double));

    free(a);
}

void ex_vpl_1() {
    void *a = malloc(sizeof(double));
    void *b = malloc(sizeof(double));

    VPL_ASIGN_SCAL(a, 0, double);
    VPL_ASIGN_SCAL(b, 6, double);
    printf("(a, b) = (%f, %f) \n", VPL_VALUE(a, double), VPL_VALUE(b, double));

    VPL_ASIGN1(a, b, double);
    printf("(a, b) = (%f, %f) \n", VPL_VALUE(a, double), VPL_VALUE(b, double));

    printf("%f + %f = ", VPL_VALUE(a, double), VPL_VALUE(b, double));
    VPL_ADD1(a, b, double);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f - %f = ", VPL_VALUE(a, double), VPL_VALUE(b, double));
    VPL_SUB1(a, b, double);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f * %f = ", VPL_VALUE(a, double), VPL_VALUE(b, double));
    VPL_MUL1(a, b, double);
    printf("%f\n", VPL_VALUE(a, double));

    printf("%f / %f = ", VPL_VALUE(a, double), VPL_VALUE(b, double));
    VPL_DIV1(a, b, double);
    printf("%f\n\n", VPL_VALUE(a, double));

    free(a);
    free(b);
}

void ex_vpl_2() {
    void *a = malloc(sizeof(float));
    void *b = malloc(sizeof(int));

    VPL_ASIGN_SCAL(a, 0, float);
    VPL_ASIGN_SCAL(b, 7, int);
    printf("(a, b) = (%f, %d) \n", VPL_VALUE(a, float), VPL_VALUE(b, int));

    VPL_ASIGN2(a, b, float, int);
    printf("(a, b) = (%f, %d) \n", VPL_VALUE(a, float), VPL_VALUE(b, int));

    printf("%f + %d = ", VPL_VALUE(a, float), VPL_VALUE(b, int));
    VPL_ADD2(a, b, float, int);
    printf("%f\n", VPL_VALUE(a, float));

    printf("%f - %d = ", VPL_VALUE(a, float), VPL_VALUE(b, int));
    VPL_SUB2(a, b, float, int);
    printf("%f\n", VPL_VALUE(a, float));

    printf("%f * %d = ", VPL_VALUE(a, float), VPL_VALUE(b, int));
    VPL_MUL2(a, b, float, int);
    printf("%f\n", VPL_VALUE(a, float));

    printf("%f / %d = ", VPL_VALUE(a, float), VPL_VALUE(b, int));
    VPL_DIV2(a, b, float, int);
    printf("%f\n\n", VPL_VALUE(a, float));

    free(a);
    free(b);
}

int main() {
    ex_vpl_op_scal();
    ex_vpl_op1();
    ex_vpl_op2();
    ex_vpl_scal();
    ex_vpl_1();
    ex_vpl_2();
    return 0;
}
