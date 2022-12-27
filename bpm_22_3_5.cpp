#include<iostream>
#include<vector>
#include<string>

int main() {
	int n, a ;
	std::string d,c;

	std::cin >> n;


	std::vector <std::string> str;
	std::vector <std::string> str1;

	for (int i = 0; i < n; i++) {
		std::cin >> d;
		str.push_back(d);
	}

	for (int i = 0; i < n; i=i+2) {
		if (i < str.size()) {
			c = str[i];
			str1.push_back(c);
		}
	}

	/*for (int i = str1.size(); i > 0; i --) {
		c = str1[i];
		str2.push_back(c);
	}*/

	//std::cout << str1.size()<< "\n ";

	for(int i = 0; i < str1.size(); i++) {
		std::cout << str1[i] << " ";
	}

	return 0;
}
