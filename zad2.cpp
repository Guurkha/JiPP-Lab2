#include <iostream>

using namespace std;

void funkcja(int &zm1, int &zm2)
{
    swap(zm1, zm2);

}

int main()
{
    int a;
    int b;

    cout << "podaj wartosc a " << endl;
    cin >> a;

    cout << "podaj wartosc b " << endl;
    cin >> b;

    int &ref1 = a;
    int &ref2 = b;

    funkcja(ref1, ref2);

    cout << "wartosc a to teraz " << a << endl;
    cout << "wartosc b to teraz " << b << endl;

    return 0;
}