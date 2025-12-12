#include <iostream>
using namespace std;

int main()
{

    cout << endl << "Half pyramid pattern" << endl;

    int n;
    cout << "Enter height of pyramid : ";
    cin >> n;
    cout << endl << endl;

    for(int i = 1; i <= n;i++)
    {
        for(int j = 1; j <= i;j++)
        {
            if((i+j) % 2 == 0)
                cout << " 1 ";
            else 
                cout << " 0 ";
            // cout << i+j ;
        }
        cout << endl;
    }
    cout << endl;

}