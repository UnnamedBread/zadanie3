#include <iostream>
using namespace std;
void rec(int n) {
    
    if (n > 0) {
        rec(n / 10);
        cout << n % 10 << " ";
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cin >> N;
    rec(N);
    return(0);
}