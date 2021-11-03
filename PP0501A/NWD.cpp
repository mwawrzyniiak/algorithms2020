#include <iostream>
#include <vector>
#include <sstream>
#include <string>

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

int nwd(int a, int b)
{
	int r = 0;
	while (b)
	{
		r = a % b;
		a = b;
		b = r;
	}
	
	return a;
}

int main()
{
	unsigned short t = 0;
	string numbersLine = "";
	vector<int> answers;

	cin >> t;
	cin.ignore();
	for (unsigned short tests = 0; tests < t; tests++)
	{
		getline(cin, numbersLine);

		auto arr = convStrToVec(numbersLine);
		answers.push_back(nwd(arr[0], arr[1]));
	}

	for (unsigned short i = 0; i < answers.size(); i++)
		cout << answers[i] << endl;
}

