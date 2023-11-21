#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = n; i > 0; i--)
    {
        cout << numbers[i - 1] << " ";
    }
    return 0;
}
