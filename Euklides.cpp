#include <iostream>

using namespace std;

void nwd (int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    cout << a;
}

int main()
{
    int a;
    int b;
    cout << "Enter number: ";
    cin >> a;
    cout << "Enter number: ";
    cin >> b;
    nwd(a, b);
    return(0);
}