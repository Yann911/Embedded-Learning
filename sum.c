#include <stdio.h>

int main() {
    int sum = 0;
    int i;
    
    // 循环从1加到100
    for (i = 1; i <= 100; i++) {
        sum += i; // 等同于 sum = sum + i;
    }
    
    printf("Sum of 1 to 100 is: %d\n", sum);
    return 0;
}

