#include <stdio.h>

int main() {
    int score;

    printf("Enter score (0-100): ");
    scanf("%d", &score);

    // 检查分数是否合法
    if (score < 0 || score > 100) {
        printf("Invalid score!\n");
    } 
    // 补全下面四个判断分支
    else if (score >= 90) {
        printf("Grade: A\n");
    } 
    else if (score >= 80) {  // 80-89 分
        printf("Grade: B\n");
    } 
    else if (score >= 70) {  // 70-79 分
        printf("Grade: C\n");
    } 
    else if (score >= 60) {  // 60-69 分
        printf("Grade: D\n");
    } 
    else {
        printf("Grade: F\n");
    }

    return 0;
}
