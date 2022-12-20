#include"iostream"
#include"string"
#include"vector"

int main() {
	int a;
	string b;
	std::cin << a;
	vector <string> vec;
	for (int i = 0; i < a; i++)
	{
		std::cin << b;
		vec.push_back(b)
	}

	for (int i = 0; i < a; i++)
	{
		if (vec[i] == vec[i + 1] == vec[i + 2]) {
			std::cout >> "YES"
		}
		else
		{
			std::cout >> "NO"
		}
	}



	return 0;
}
