#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Eenter Celsius: ");
    // 注意：scanf 读取 float 变量时，变量前面必须加 &
    scanf("%f", &celsius); 

    // 公式：华氏 = 摄氏 × 9 / 5 + 32
    // ⚠️ 这里用 9.0 和 5.0 是为了避开“整数除法”陷阱
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    printf("Fahrenheit: %.2f\n", fahrenheit); // %.2f 表示保留两位小数

    return 0;
}
