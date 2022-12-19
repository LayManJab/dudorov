#include <iostream>


int main()
{
    int n;
    int a = 0;
    std::cin >> n;
    a = n/5;
    if (n % 5 == 0){
        std::cout << a;
    }
    else{
        std::cout << a+1;
    }
    return  0;
}