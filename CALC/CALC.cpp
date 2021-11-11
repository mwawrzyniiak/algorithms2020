#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

int calculation(char c, int n1, int n2)
{
	switch (c) 
	{
		case '+':
			return n1 + n2;
		case '-':
			return n1 - n2;
		case '*':
			return n1 * n2;
		case '/':
			return n1 / n2;
		case '%':
			return n1 % n2;
	}
}

int main()
{
	char c = ' ';
	int n1 =0, n2 = 0;
	std::vector<int> output;

	while(scanf(" %c %d %d", &c, &n1, &n2) == 3)
	{
		if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
			output.push_back(calculation(c, n1, n2));
	}

	for (auto it = output.begin(); it != output.end(); ++it)
		std::cout << *it << std::endl;

	output.clear();
}

