#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main()
{
    int unityNumber;
    scanf("%d", &unityNumber);

    if (unityNumber <= 1)
    {
        unityNumber = 1;
    } 
    else
    {
        if (unityNumber == 2)
            unityNumber = 2;
        else if (unityNumber == 3)
            unityNumber = 6;
        else if (unityNumber == 4)
            unityNumber = 4;
        else
            unityNumber = 0;
    }

    printf("%d", unityNumber);
    return 0;
}



