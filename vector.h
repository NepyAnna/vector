#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    double x, y;
} Vector;

void vectorIncrement(Vector *this, Vector other);
void vectorDecrement(Vector *this, Vector other);
int vectorEqual(Vector a, Vector b);
Vector vectorSum(Vector a, Vector b);
Vector vectorDiff(Vector a, Vector b);
double vectorLen(Vector this);
void vectorPrint(Vector this);

#endif
