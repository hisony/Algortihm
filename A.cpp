#include <bits/stdc++.h>

using namespace std;

int *mergeTwoArrays(int *a, int *b, int n, int m)
{

    int *c = new int[n + m];
    int i = 0, j = 0, k = 0;

    while (i <= n - 1 && j <= m - 1)
    {

        if (a[i] > b[j])
        {

            c[k++] = b[j++];
        }
        else
        {
            c[k++] = a[i++];
        }
    }

    while (i <= n - 1)
    {

        c[k++] = a[i++];
    }

    while (j <= m - 1)
    {

        c[k++] = b[j++];
    }

    return c;
}

void print(int *a, int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}
int main()
{

    int a[] = {5, 10, 40, 50, 60};

    int b[] = {11, 13, 18, 99, 101};

    int *c = mergeTwoArrays(a, b, 5, 5);

    print(c, 10);
}