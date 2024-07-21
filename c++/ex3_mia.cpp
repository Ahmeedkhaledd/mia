#include <string>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, max = 0;
    //cout << "enter n: ";
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++)
    {
        //cout << "enter elements: ";
        cin >> array[i];
    }

    for(int i = 0; i < n; i++) //1 2 3 4 
    {
        if(array[i] > max)
        {
            max =array[i];
        }
    }

    cout << max;
}