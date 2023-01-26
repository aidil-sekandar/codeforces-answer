#include <iostream>
 
int main() {
        int n, x = 0;
        std::string stat;
 
        std::cin >> n;
 
        for (int i = 0; i < n; i++) {
                std::cin >> stat;
                if (stat == "X++" || stat == "++X") {
                        x++;
                } else if (stat == "X--" || stat == "--X") {
                        x--;
                }
        }
 
        std::cout << x;
 
        return 0;
}
