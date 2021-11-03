#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int nww(int a, int b)
{
	int max = a;
	if (b >= a)
		max = b;

	for (int i = 1; i <= max; i++)
	{
		if (i % a == 0 && i % b == 0)
			return i;
		if (i == max)
			max *= 2;
	}
}

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
	unsigned short N = 0;
	string numbersLine = "";
	vector<int> answers = {};

	cin >> N;
	cin.ignore();
	for (unsigned short i = 0; i < N; i++)
	{
		getline(cin, numbersLine);
		auto numbers = convStrToVec(numbersLine);
		answers.push_back(nww(numbers[0], numbers[1]));
	}

	for (unsigned short j = 0; j < answers.size(); j++)
		cout << answers[j] << endl;

}
