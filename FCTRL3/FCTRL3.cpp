#include <iostream>
#include <vector>

using namespace std;

struct AnswerStruct {
	int tens = 0;
	int short ones = 0;
	AnswerStruct(int t, int o) : tens(t), ones(o) {}
};

AnswerStruct FactorialTensAndOnes(int n)
{
	int tens = 0, ones = 1;
	
	if (n > 1 && n < 5)
	{
		for (int i = 1; i <= n; i++)
			ones *= i;
		tens = ones / 10;
		ones = ones % 10;
	}
	else if (n >= 5 && n < 10)
	{
		for (int i = 1; i <= n; i++)
			ones *= i;

		tens = (ones / 10) % 10;
		ones = 0;
	}
	else if (n >= 10)
		ones = 0;

	return AnswerStruct(tens, ones);
}

int main()
{
	int D = 0;
	unsigned int testNum = 0;
	vector<AnswerStruct> factorialTensAndOnes;
	cin >> D;

	for (int i = 0; i < D; i++)
	{
		cin >> testNum;
		factorialTensAndOnes.push_back(FactorialTensAndOnes(testNum));
	}

	for (auto j : factorialTensAndOnes)
		cout << j.tens; cout << " "; cout << j.ones; cout << endl;
}

