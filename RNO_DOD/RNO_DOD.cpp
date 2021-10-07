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
	vector<int> sums;
	int sum = 0;
	int t, n = 0;
	string numbersLine = "";
	
	cin >> t;

	for (int tests = 0; tests < t; tests++) {
		cin >> n;
		cin.ignore();
		getline(cin, numbersLine);
		
		vector<int> arr = convStrToVec(numbersLine);

		for (int i = 0; i < arr.size(); i++)
			sum += arr[i];

		sums.push_back(sum);
		sum = 0;
	}

	for (int i = 0; i < sums.size(); i++)
		cout << sums[i] << "\n";
}

