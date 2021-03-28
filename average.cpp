#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr)
{
    double answer = 0;
    int len = arr.size();

    for (int i = 0; i < len; i++)
    {
        answer += arr[i];
    }
    if (len > 0)
        answer /= len;

    return answer;
}