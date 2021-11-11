#include <iostream>
#include <vector>

int main()
{
	std::vector<int> answer;
	int x = 0;
	int sum = 0;

	while (std::cin >> x)
		answer.push_back(x);

	for (int i = 0; i < answer.size(); i++)
	{
		for (int j = 0; j <= i; j++)
			sum += answer[j];

		std::cout << sum << std::endl;
		sum = 0;
	}

	answer.clear();
}
