#include <iostream>

using namespace std;

void zamiana(int &first, int &second)
{
    int temp;
    temp = first;
    first = second;
    second = temp;
    
}

void zamiana(float &first, float &second)
{
    float temp;
    temp = first;
    first = second;
    second = temp;
    
}
int main()
{
    int a = 34;
    int b = 50;

    cout << "przed wywolaniem funkcji ' a ' = " << a << " ' b ' = " << b << endl;
    
    zamiana(a, b);

    cout << "po wywolaniu funkcji: ' a ' " << a << " 'b' = " << b << endl;

    return 0;

}