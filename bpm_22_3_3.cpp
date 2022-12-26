#include <iostream>
#include <string>
#include <vector>

int main() {

    int n, sum=0;
    std::vector <std::string> vec;
    std::string a;
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cin >> a;
        vec.push_back(a);
    }

    for(int i=0; i<n; i++){
        if(vec[i] == vec[i+1] and vec[i+1] == vec[i+2]){
            sum++;
        }
    }

    if(sum > 0){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }


    return 0;
}
