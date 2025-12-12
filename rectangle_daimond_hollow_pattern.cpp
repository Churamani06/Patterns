#include <iostream>
using namespace std;

int main()
{

    cout << endl << "rectangle daimond hollow pattern" << endl;

    int n;
    cout << "Enter height of traingle : ";
    cin >> n;
    cout << endl << endl;

    for(int i = 0; i < n;i++)
    {
        for(int j = n-i; j > 0;j--)
        {
            cout << " * ";
        }
        for(int j = 0; j < i;j++)
        {
            cout << "   ";
        }
        for(int j = 0; j < i;j++)
        {
            cout << "   ";
        }
        for(int j = n-i;j > 0;j--)
        {
            cout << " * ";
        }
        cout << endl;
    }
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < i+1;j++)
        {
            cout << " * ";
        }
        for(int j = i+1; j < n;j++)
        {
            cout << "   ";
        }
        for(int j = n-i-1; j > 0;j--)
        {
            cout << "   ";
        }
        for(int j = 0;j < i+1;j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << endl;

}