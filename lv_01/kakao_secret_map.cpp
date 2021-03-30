#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string bit_to_str(int num, int n)
{
    string str = "";

    for (int i = 0; i < n; i++)
    {
        if (num % 2)
            str.push_back('#');
        else
            str.push_back(' ');
        num /= 2;
    }
    reverse(str.begin(), str.end());

    return str;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<string> answer;

    for (int i = 0; i < n; i++)
    {
        arr1[i] |= arr2[i];
        answer.push_back(bit_to_str(arr1[i], n));
    }

    return answer;
}