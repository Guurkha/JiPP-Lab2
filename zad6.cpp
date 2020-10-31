#include <iostream>
#include <utility>

using namespace std;

template <class T, size_t N>
void swap(T& a, T& b)
{
  T temp = 0;
  temp = a;
  a = b;
  b = temp; 
} 

template <class T, size_t N>
void swap2(T (&a)[N], T (&b)[N])
{
  for (size_t i = 0; i<N; ++i) 
    swap(a[i], b[i]);
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