#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    cout << endl << "Inner reducing number pattern" << endl;

    int n;
    cout << "Enter height of traingle : ";
    cin >> n;
    cout << endl << endl;

    int a = 0,b = n-1;
    for(int i = 0; i < n*2-1;i++)
    {
        for(int j= 0; j < n*2-1;j++)
        {
            int bottom = (2*n - 2) - i;
            int right = (2*n - 2) - j;
            int left = j;
            int top = i;

            cout << " " << (n - (min(min(top,bottom),min(right,left)))) << " ";
        }
        cout << endl;
    }
    cout << endl;
}