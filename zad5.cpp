#include <iostream>

using namespace std;

template <typename T> 

void zamiana(T &first, T &second)
{
    T temp;
    temp = first;
    first = second;
    second = temp;
    
}
int main()
{
    int a = 34;
    int b = 50;
    
    float c = 23;
    float d = 88;

    char f = 'f';
    char e = 'e';

    cout << "przed wywolaniem funkcji ' a ' = " << a << " ' b ' = " << b << endl;
    
    zamiana(a, b);

    cout << "po wywolaniu funkcji: ' a ' " << a << " 'b' = " << b << endl;

    cout << "przed wywolaniem funkcji ' c ' = " << c << " ' d ' = " << d << endl;
    
    zamiana(c, d);

    cout << "po wywolaniu funkcji: ' c ' " << c << " 'd' = " << d << endl;

    cout << "przed wywolaniem funkcji ' f ' = " << f << " ' e ' = " << e << endl;
    
    zamiana(e, f);

    cout << "po wywolaniu funkcji: ' e ' " << e << " 'f' = " << f << endl;

    return 0;

}