#include "Integer.h"

int main() {
    Integer a, b;

    std::cin >> a;
    std::cin >> b;
    b++;
    std::cout << -(a + b) << std::endl;
}