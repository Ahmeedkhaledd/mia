#include <string>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, target;
    cout << "enter n: ";
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++)
    {
        cout << "enter elements: ";
        cin >> array[i];
    }
    
    cout << "enter the target: ";
    cin >> target;

    for(int i = 0; i < n; i++)
    {
        if(array[i] == target)
        {
            cout << i;
            break;
        }
        else
        {
            cout << "-1";
            break;
        }
    }

 

}