#include <iostream>

// task 1
int count(int* arr, int size, int element) {
    return (size == 0 ? 0 : ((int)(*arr == element) + count(arr + 1, size - 1, element)));
}

// task 2
const int MAX_SIZE = 100;

bool isCharADigit(char symbol) {
    return (symbol >= '0') && (symbol <= '9');
}

char transformCharDigit(char charDigit) {
    int digit = charDigit - '0';
    int newDigit = 9 - digit;
    char newCharDigit = '0' + newDigit;

    return newCharDigit;
}

void tranformString(char* str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(isCharADigit(str[i])) {
            str[i] = transformCharDigit(str[i]);
        }
    }
}

// task 3
void getCoordinates(const char* commands, int* coordinates) {
    short coef = 1;

    for (size_t index = 0; commands[index]; ++index) {
        switch (commands[index])
        {
            case '>': coordinates[0] += coef; break;
            case '<': coordinates[0] -= coef; break;
            case 'v': coordinates[1] -= coef; break;
            case '^': coordinates[1] += coef; break;
            default: coef *= (-1); break;
        }
    }
}

// task 4
void printRow(const std::size_t & maxNumber, const std::size_t & current) {
    if (maxNumber == current - 1)
        return ;

    std::cout << maxNumber << ' ';

    printRow(maxNumber - 1, current);
}

void  printPyramid(const std::size_t &number, const size_t &maxElement) {
    if (number == 0)
        return;

    printRow(maxElement, number);

    std::cout << std::endl;

    printPyramid(number - 1, maxElement);
}

int main() {
    printPyramid(5, 5);
    return 0;
}
