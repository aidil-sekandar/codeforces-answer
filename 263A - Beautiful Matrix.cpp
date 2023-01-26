#include <iostream>
#include <cstdlib>
 
int main() {
        int arr[5][5];
        int a, b, c, d, e, x, y = 0;
 
        for (int i = 0; i < 5; i++) {
                std::cin >> a >> b >> c >> d >> e;
                arr[i][0] = a;
                arr[i][1] = b;
                arr[i][2] = c;
                arr[i][3] = d;
                arr[i][4] = e;
        }
 
        for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                        if (arr[i][j] == 1) {
                                x = i;
                                y = j;
                        }
                }
        }
 
        x = abs(2 - x);
        y = abs(2 - y);
 
        std::cout << x + y;
 
        return 0;
}
