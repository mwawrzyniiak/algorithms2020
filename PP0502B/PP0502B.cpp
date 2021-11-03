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

vector<int> swap(vector<int> numbers)
{
	vector<int> ret;
	for (int i = numbers[0]; i >= 1; i--)
		ret.push_back(numbers[i]);
	
	return ret;
}

int main()
{
	vector<vector<int>> answers;
	unsigned short t = 0;
	string numbersLine = "";

	cin >> t;
	cin.ignore();

	for (unsigned short tests = 0; tests < t; tests++) 
	{
		getline(cin, numbersLine);
		auto numbers = convStrToVec(numbersLine);
		answers.push_back(swap(numbers));
	}

	for (unsigned short i = 0; i < answers.size(); i++)
	{
		for (unsigned short j = 0; j < answers[i].size(); j++)
			cout << answers[i][j] << " ";
		cout << endl;
	}
}
