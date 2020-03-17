#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main()
{
	int A, B, K;

	int shorter = 0;
	int longer = 0;
	int shorterChairs = 0;
	int longerChairs = 0;

	int result = 0;

	scanf("%d %d %d", &A, &B, &K);
	
	if (A < B)
	{
		shorter = A;
		longer = B;
	}
	else
	{
		shorter = B;
		longer = A;
	}

	//dlugosc row
	shorterChairs = ((int)(shorter / K)) * K;

	// dlugosc column
	longerChairs = ((int)(longer / K)) * K;

	if (shorterChairs == K)
	{
		result =  longerChairs / K;
	}
	else if (longerChairs != 0 && shorterChairs != 0)
	{
		result = (2 * (shorterChairs + longerChairs)) / K;
		result -= 4;
	}

	printf("%d", result);
	return 0;
}
