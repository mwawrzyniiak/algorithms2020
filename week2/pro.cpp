#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int CountNumberOfRectangles(int squares);
int GetSideLength(int squares);

int main()
{
	int squares = 0;
	int intermediateSquares = 0;
	int rectangles = 0;
	int largestPossibleDimensions = 0;
	scanf("%d", &squares);
	
	if (squares < 4)
	{
		rectangles = squares;
	} 
	else
	{
		// prostokaty o wymiarach 1xN, gdzie N = liczbie squares;
		rectangles = squares; 

		largestPossibleDimensions = GetSideLength(squares);
		for (int i = 2; i <= largestPossibleDimensions; i++)
		{
			intermediateSquares = 0;
			intermediateSquares = ((squares - (i * i)) / i) + 1;
			rectangles += intermediateSquares;
		}
	}
	
	printf("%d", rectangles);
	return 0;
}

int CountNumberOfRectangles(int squares)
{
	int numberOfRectangles = 1;


	return numberOfRectangles;
}

int GetSideLength(int squares)
{
	long long maxSquare = 1;
	bool isMax = true;
	long long i = 2;
	long long squareArea;

	while (isMax)
	{
		squareArea = i * i;
		if (squareArea <= squares)
		{
			i++;
			maxSquare = squareArea;
		}
		else
		{
			isMax = false;
		}
	}
	i--;
	return maxSquare / i;
}
