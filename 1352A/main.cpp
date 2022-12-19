#include <iostream>


int main()
{
    int n;
    int z = 0;
    int k;
    std::cin>>k;
    while (z < k){
        std::cin>>n;

        int a=n%10;
        int b=(n/10)%10;
        int c=(n/100)%10;
        int d=n/1000;
        int g = 0;

        if (a > 0){
            g++;
        }
        if (b > 0 and n >= 10){
            g++;
        }
        if (c > 0 and n >= 100){
            g++;
        }
        if (d > 0 and n >= 1000){
            g++;
        }
        std::cout << g << "\n";
        if (a > 0){
            std::cout <<  a  << " ";
        }
        if (b > 0 and n >= 10){
            std::cout <<  b*10 << " " ;
        }
        if (c > 0 and n >= 100){
            std::cout <<  c*100 << " " ;
        }
        if (d > 0 and n >= 1000){
            std::cout <<  d*1000 << " " ;
        }
        z++;
    }
}