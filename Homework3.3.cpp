#include <iostream>
using namespace std;
int rec(int n, int a = 2) {
    if (a == 2) {
        while (n % a == 0) {
            cout << a << " ";
            n = n / a;
        }
        if (n == 1)
            return 0;
        rec(n, a + 1);

    }
    else {
        while (n % a == 0) {
            cout << a << " ";
            n = n / a;
        }
        if (n == 1)
            return 0;
        rec(n, a + 2);
    }
    return(0);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    rec(n);

    return(0);
}