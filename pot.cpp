#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int power(int basis, int index);
int getLastDigit(int number);

int main()
{
	long long basis;
	int index;
	int lastDigit = 0;

	scanf("%lld %d", &basis, &index);

	if (basis % 10 == 0 || basis % 10 == 1 || basis % 10 == 5)
	{
		printf("%lld", (basis % 10));
		return 0;
	} 
	else
	{
		basis %= 10;
	}

	if (index % 4 == 0)
	{
		index = 4;	
	} 
	else
	{
		index %= 4;
	}

	lastDigit = getLastDigit(power(basis, index));

	printf("%d", lastDigit);
	return 0;
}

int power(int basis, int index)
{
	int powerResult = 1;
	for (int i = 0; i < index; i++)
	{
		powerResult *= basis;
	}
	return powerResult;
}

int getLastDigit(int number)
{
	return number % 10;
}
