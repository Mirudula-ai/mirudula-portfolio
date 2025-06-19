// Number Sorting
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) { int t = a; a = b; b = t; }
    if (b > c) { int t = b; b = c; c = t; }
    if (a > b) { int t = a; a = b; b = t; }
    printf("Sorted: %d %d %d\n", a, b, c);
    return 0;
}