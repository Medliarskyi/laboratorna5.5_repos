#include <iostream>

int gcd(int n, int m, int level = 1) {
    std::cout << "Level of recursion: " << level << ", n = " << n << ", m = " << m << std::endl;

    if (m == 0) {
        std::cout << "Depth of recursion: " << level << std::endl;  // Виведення глибини
        return n;  // Базовий випадок
    }

    return gcd(m, n % m, level + 1);  // Рекурсивний виклик з збільшенням рівня
}

int main() {
    int n, m;
    std::cout << "Enter two natural numbers: ";
    std::cin >> n >> m;

    std::cout << "GSD(" << n << ", " << m << ") = " << gcd(n, m) << std::endl;

    return 0;
}