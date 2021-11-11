#include <iostream>

int main()
{
	unsigned short D = 0;
	int* output;
	std::cin >> D;

	output = new int[D];

	for (unsigned short i = 0; i < D; i++)
		std::cin >> output[i];

	for (unsigned short j = 0; j < D; j++)
		std::cout << output[j] * output[j] << std::endl;

	delete[] output;
}

