#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum, sub, aux;
    cin >> n;
    sum = 0;
    sub = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        sum += aux;
    }
    for (int j = 0; j < n; j++)
    {
        cin >> aux;
        sub += aux;
    }

    if (sum == sub)
    {
        cout << "Sim";
    }
    else
    {
        cout << "Nao";
    }
    return 0;
}