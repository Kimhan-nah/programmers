#include <stdio.h>

long long solution(int a, int b)
{
    long long answer = 0;
    long long min;
    long long max;

    min = (a <= b) ? a : b;
    max = (a <= b) ? b : a;

    for (min; min <= max; min++)
    {
        answer += min;
    }
    return answer;
}