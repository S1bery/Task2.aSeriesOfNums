#include <iostream>

// 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36 - сумма равна 435
int main() {
    int numbers[15] = {23, 30, 25, 22, 24, 31, 25, 34, 35, 26, 29, 32, 33, 27, 28};

    int firstNum = 22; // так как мы сами задаем Х, значит мы знаем первое число последовательности
    int lastNum = firstNum + 14; // узнаем последнее число последовательности исходя из известного Х

    int correctSum= 0;
    int currentSum = 0;

    for (int i = 0; i < 15; i++) {
        currentSum += numbers[i];
    }
    for (int i = 0; i < 15; i++) {
        correctSum += firstNum;
        firstNum++;
    }

    int dif = correctSum - currentSum; // узнаем разницу
    int answer = lastNum - dif;

    std::cout << answer;

    return 0;
}
