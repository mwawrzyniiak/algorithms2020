#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

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
    string numbersLine = "";
    unsigned short t = -1;;
    vector<int> vsr;

    cin >> t;
    cin.ignore();

    for (unsigned short i = 0; i < t; i++)
    {
        getline(cin, numbersLine);

        vector<int> numbers = convStrToVec(numbersLine);
        int v = (2 * numbers[0] * numbers[1]) / (numbers[0] + numbers[1]);
        vsr.push_back(v);
    } 

    for (auto& v : vsr)
        cout << v << "\n";
}
