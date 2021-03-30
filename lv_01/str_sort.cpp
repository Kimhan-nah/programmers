#include <string>

using namespace std;

string solution(string s)
{
    string answer = s;
    int len = s.length();
    char tmp;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (answer[i] < answer[j])
            {
                tmp = answer[i];
                answer[i] = answer[j];
                answer[j] = tmp;
            }
        }
    }
    return answer;
}