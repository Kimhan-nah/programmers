#include <string>
#include <algorithm>

using namespace std;

long long solution(long long n)
{
    string str;

    str = to_string(n);
    sort(str.rbegin(), str.rend());
    n = stol(str);

    return (n);
}