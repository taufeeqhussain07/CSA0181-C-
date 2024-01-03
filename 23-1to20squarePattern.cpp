#include <iostream>

int main() {
    int counter = 1;

    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= 5; ++j) {
            std::cout << counter << " ";
            ++counter;
        }
        std::cout << std::endl;
    }

    return 0;
}
