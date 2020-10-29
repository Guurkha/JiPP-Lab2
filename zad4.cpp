#include <iostream>

using namespace std;

int funkcja(int zm1, int zm2, int &suma)
{
    suma = zm1 + zm2;
    
    return zm1 * zm2;
    
}

int main()
{
    int a = 0;
    int b = 0;
    int iloczyn = 0;
    int suma = 0;

    cout << "wartosc a to: " << endl;
    cin >> a;

    cout << "wartosc b to: " << endl;
    cin >> b;

    iloczyn = funkcja(a, b, suma);

    cout << "suma to " << suma << " iloczyn to " << iloczyn << endl;

    return 0;
}