#include <string>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int row,col, just = 0, vill = 0;
    cout << "enter number of rows: ";
    cin >> row;

    cout << "enter number of col: ";
    cin >> col;

    int array1[row][col], array2[row][col];
    
    cout << "the first array." << '\n';

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "enter the element: ";
            cin >> array1[i][j];
        }
    }

    cout << "the second array." << '\n';
    
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "enter the element: ";
            cin >> array2[i][j];
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(array1[i][j] > array2[i][j])
            {
                just = just + 1;
            }
            else if(array1[i][j] < array2[i][j])
            {
                vill = vill + 1;
            }
        }
    }

    if(just > vill)
    {
        cout << "Justice League";
    }
    else if(vill > just)
    {
        cout << "Villains";
    }
    else
    {
        cout << "Tie";
    }
}