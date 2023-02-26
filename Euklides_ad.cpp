#include <iostream>
#include <vector>

using namespace std;

vector<int> nwd (int a, int b)
{
    int n = 1;
    int m = 0;
    int p = 0;
    int s = 1;
    int c;
    int q;
    int r;
    int t;

    while (b != 0)
    {
        c = a % b;
        q = a / b;
        a = b;
        b = c;

        r = p;
        t = s;

        p = n - q * p;
        s = m - q * s;
        n = r;
        m = t;
    }
    vector<int> num{a, n, m};
    return num;
}

int main()
{
    int a;
    int b;
    cout << "Enter number: ";
    cin >> a;
    cout << "Enter number: ";
    cin >> b;

    cout << nwd(a, b)[0] << " = " << nwd(a, b)[1] << " * " << a << " + " << nwd(a, b)[2] << " * " << b;
    return 0;
}