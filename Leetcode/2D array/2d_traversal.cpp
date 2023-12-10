#include <iostream>

int main() {
    const int rows = 3;
    const int cols = 4;

    int myArray[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << myArray[i][j] << " ";
        }
        std::cout << std::endl; 
    }

    return 0;
}
