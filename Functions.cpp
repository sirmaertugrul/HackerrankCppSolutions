#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int numbers[4] = {a, b, c, d};
    int biggest = a;

    for (int i = 0; i < 4; i++)
    {
        if (numbers[i] > biggest)
        {
            biggest = numbers[i];
        }
    }
    return biggest;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}