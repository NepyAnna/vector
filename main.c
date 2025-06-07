#include <stdio.h>
#include "vector.h"

int main() {
    Vector a = {3, 4};
    Vector b = {1, 2};

    printf("Vector a = "); vectorPrint(a); printf("\n");
    printf("Vector b = "); vectorPrint(b); printf("\n");

    Vector sum = vectorSum(a, b);
    printf("Sum: "); vectorPrint(sum); printf("\n");

    Vector diff = vectorDiff(a, b);
    printf("Diff: "); vectorPrint(diff); printf("\n");

    printf("Length of a: %g\n", vectorLen(a));
    printf("Are a and b equal? %s\n", vectorEqual(a, b) ? "Yes" : "No");

    return 0;
}
