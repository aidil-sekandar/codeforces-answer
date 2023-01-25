#include <iostream>

int main() {
        int m, n, total = 0;
        std::cin >> m >> n;

        if (m * n % 2 == 0) {
                total = (m * n) / 2;
        } else {
                total = ((m * n) - 1) / 2;
        }

        std::cout << total;

        return 0;
}
