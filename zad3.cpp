#include <iostream>

using namespace std;

void funkcja(int *wsk, int &ref)
{
    swap(*wsk, ref);

}

int main()
{
    int a;
    int b;
    int *wsk = nullptr;
    
    cout << "podaj a: " << endl;
    cin >> a;
    
    cout << "podaj b" << endl;
    cin >> b;

    wsk = &a;
    int &ref = b;

    funkcja(wsk, ref);

    cout << "po zamianie" << endl;
    cout << "a to " << a << " b to " << b << endl;

    return 0;


}