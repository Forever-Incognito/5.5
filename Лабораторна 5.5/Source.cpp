//lab_5.5

#include <iostream>

using namespace std;

int gcd(int n, int m)
{
    if (n == 0)
        return m;
    if (m % n == 0)
        return n;
    if (n == m)
        return n;
    if (n > m)
        return gcd(n - m, m);
    return gcd(n, m - n);
}

int gcd2(int r, int m)
{
    if (r == 0)
        return m;
    if (r % m == 0)
        return r;
    if (r == m)
        return r;
    if (r > m)
        return gcd(r - m, m);
    return gcd(r, m - r);
}

int main()
{
    int n, m;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    int r;
    r = n % m;
    cout << "gcd(n,m)" << " is " << gcd(n, m);
    cout << endl;
    cout << "gcd(m,r)" << " is " << gcd2(r, m);
    return 0;
}