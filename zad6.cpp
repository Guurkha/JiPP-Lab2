#include <iostream>

using namespace std;

template <class T>
void swap3(T& a, T& b)
{
    T 
    c(move(a)); 
    a=move(b); 
    b=move(c);
}

template <class T, size_t N>
void swap2(T (&a)[N], T (&b)[N])
{
  for (size_t i = 0; i<N; ++i) 
    swap3(a[i], b[i]);
}


int main()
{
    float tab1[3] = {1, 2 ,3};
    float tab2[3] = {5, 6, 7};
    cout << endl << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << " " << tab1[i] << " ";
    }
    cout << endl << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << " " << tab2[i] << " ";
    }

    swap2(tab1, tab2);
    cout << endl << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << " " << tab1[i] << " ";
    }

    cout << endl << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << " " << tab2[i] << " ";
    }

    return 0;

}