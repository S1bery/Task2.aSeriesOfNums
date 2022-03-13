#include <iostream>

// 22, 23, 24, 25, 26, 27, 28, 25, 30, 31, 32, 33, 34, 35, 36
int main() {
    int numbers[] = {23, 30, 35, 22, 24, 31, 25, 34, 36, 26, 25, 32, 33, 27, 28};

    int repetNum;
    for (int i = 0; i < 15; i ++){
        for (int j = 0; j < 15; j++) {
            if (numbers[i] == numbers[j] && i != j)
                repetNum = numbers[j];
        }
    }
    std::cout << repetNum;
    return 0;
}
