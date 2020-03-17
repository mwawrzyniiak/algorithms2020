#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

bool IsPowerOfTwo(long long n);

int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%s\n", IsPowerOfTwo(n) ? "TAK" : "NIE");

	return 0;
}

bool IsPowerOfTwo(long long n)
{
	while (n % 2 == 0)
	{
		n /= 2;
	}
	return n == 1;
}
