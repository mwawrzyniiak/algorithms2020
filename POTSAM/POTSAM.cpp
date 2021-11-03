#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> convStrToVec(string line)
{
	vector<int> numbers;
	string item = "";

	stringstream stream(line);
	while (getline(stream, item, ' '))
		numbers.push_back(stoi(item));

	return numbers;
}

int main()
{
	string numbersLine = "";
	getline(cin, numbersLine);
	auto numbers = convStrToVec(numbersLine);
	
	cout << numbers[0] * numbers[1] + numbers[2] * numbers[3];
}
