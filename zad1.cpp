#include <iostream>

using namespace std;

void funkcja(int *pointer1, int *pointer2)
{
    int temp;
    if(*pointer1 > *pointer2)
    {
        temp = *pointer1;
        *pointer1 = *pointer2;
        *pointer2 = temp; 
    }

}
int main()
{
    int *wsk1 = nullptr;
    int *wsk2 = nullptr;
    int a;
    int b;
    
    cout << "podaj wartosc dla pierwszego wskaznika: " << endl;
    cin >> a;
    wsk1 = &a;

    cout << endl << "podaj wartosc dla pierwszego wskaznika 2: " << endl;
    cin >> b;
    wsk2 = &b;

    funkcja(wsk1, wsk2);

    cout << "po zamianie" << endl;
    cout << "wartosc wsk1 to " << *wsk1 << " a wsk2 to " << *wsk2 << endl;

    return 0;

}