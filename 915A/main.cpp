#include <iostream>
#include <vector>

int main() {
    int n,k,a;
    std::cin >> n >> k;
    std::vector <int> vec;
    for(int i = 0; i < n; i++){
        std::cin >> a;
        vec.push_back(a);
    }

    std::sort(vec.begin(), vec.end());
    std::reverse(vec.begin(), vec.end());

    for(int i = 0; i < n; i++){
        if(k%vec[i] ==0){
            std::cout << k/vec[i];
            break;
        }
    }

    return 0;
}
