#include <iostream>
int solveMeFirst(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2, sum;
    std::cin >> num1 >> num2;
    sum = solveMeFirst(num1, num2);
    std::cout << sum << std::endl;
    return 0;
}
