#include <iostream>
using namespace std;

int main()
{

    cout << endl << "Half pyramid pattern" << endl;

    int n;
    cout << "Enter height of pyramid : ";
    cin >> n;
    cout << endl << endl;

    for(int i = 0; i < n;i++)
    {
        for(int j = n; j  > 0+i;j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

}