#include <iostream>
using namespace std;
int rec(int n, int a, int k) {
    if (n > 0) {
        a = a + (n % 10) * pow(2, k);
        k += 1;s
        n = n / 10;
        a = rec(n, a, k);
        
    }
    return(a);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    cout << rec(n, 0, 0);

    return(0);
}