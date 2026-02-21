#include <stdio.h>

int main() {
    int length;
    int width;

    printf("Write Length\n");
    scanf("%d", &length);

    printf("Write Width\n");
    scanf("%d", &width);

    printf("Area of rectangle is %d", length * width);
    return 0;
}
