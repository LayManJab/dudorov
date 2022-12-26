#include <iostream>
#include <string>
#include <vector>

int main() {

    int n;
    bool flag = false;
    std::vector <std::string> vec;
    std::string a;
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cin >> a;
        vec.push_back(a);
    }

    for(int i=0; i<n; i++){
        if(vec[i] == vec[i+1] and vec[i+1] == vec[i+2]){
            flag=true;
        }
    }

    if(flag){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }


    return 0;
}
