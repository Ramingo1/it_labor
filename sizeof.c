#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("int size: %ld bytes\n", sizeof(int));
    printf("float size: %ld bytes\n", sizeof(float));
    printf("char size: %ld byte\n", sizeof(char));
    printf("\n");
    printf("int limits %d, %d\n", INT_MIN, INT_MAX);
    printf("float limits %f, %f\n", FLT_MIN, FLT_MAX);
    printf("char limits %d, %d\n", CHAR_MIN, CHAR_MAX);
    printf("\n");
    printf("If this is correct, line should be wrong: %d\n", 2147483648);
    printf("The original number was 2147483648. It's negative as the maximum value of int is 2147483647.\n");
    printf("If this is correct, line should be wrong: %f\n", 340282346638528859811704183484516925441.000000);
    printf("The original number was 340282346638528859811704183484516925441.000000. It defaults to it's maximum range of float.\n");
    printf("If this is correct, line should be wrong: %c\n", 128);
    printf("The original number was 128. It's broken, because it's not in the range of char.\n");
    printf("Idris mag Babyoel");
    return 0;
}
