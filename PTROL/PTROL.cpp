#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

typedef unsigned short SHORT;

vector<int> convStrToVec(string line)
{
	vector<int> numbers;
	string item = "";

	stringstream stream(line);
	while (getline(stream, item, ' '))
		numbers.push_back(stoi(item));

	return numbers;
}

string move(vector<int> arr)
{
	string output = "";
	arr.erase(arr.begin());
	string end = std::to_string(arr[0]);
	
	for (SHORT i = 1; i < arr.size(); i++)
	{
		output += std::to_string(arr[i]);
		output += " ";
	}
	output += end;

	return output;
}

int main()
{
	vector<string> output;
	string line = "";
	SHORT t = 0;
	
	cin >> t;

	cin.ignore();
	for (SHORT i = 0; i < t; i++)
	{
		getline(cin, line);
		auto vec = convStrToVec(line);
		output.push_back(move(vec));
	}

	for (SHORT j = 0; j < output.size(); j++)
		cout << output[j] << endl;

	output.clear();
}

