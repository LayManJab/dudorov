#include<iostream>


int main(){
    int n,f,t,k,max=-2147483647;


    std::cin >> n >> k;

    for(int i = 0; i < n; i++){
        std::cin >> f >> t;
        if (t>k){
            f = f-(t-k);
            if(f > max){
                max = f;
            }
        }

        if (t<=k){
            if(f > max){
                max = f;
            }
        }
    }

    std::cout << max;
}