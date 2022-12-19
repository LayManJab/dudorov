#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    std::cin >> n;
    if (n % 2 == 0 and n > 2) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    return 0;
}
