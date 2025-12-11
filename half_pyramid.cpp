#include <iostream>
using namespace std;

int main()
{

    cout << "Half pyramid pattern" << endl;

    int n;
    cout << "Enter height of pyramid : ";
    cin >> n;
    cout << endl << endl;

    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < i+1;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

}