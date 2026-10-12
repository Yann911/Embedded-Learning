#include <stdio.h>

int main() {
    int duty_cycle;
    
    printf("Simulating PWM ramping up...\n");
    
    // 外层循环：模拟占空比从0%上升至100%，步长为10
    for (duty_cycle = 0; duty_cycle <= 100; duty_cycle += 10) {
        printf("Duty: %3d%% [", duty_cycle);
        
        // 内层循环：根据占空比打印对应的星号，每10%打印一个星
        for (int i = 0; i < duty_cycle / 10; i++) {
            printf("*");
        }
        
        printf("]\n");
    }
    return 0;
}
