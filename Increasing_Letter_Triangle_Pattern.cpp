#include <iostream>
using namespace std;

int main()
{

    cout << endl << "Increasing Letter Triangle pattern" << endl;

    int n;
    cout << "Enter height of pyramid : ";
    cin >> n;
    cout << endl << endl;

    for(int i = 0; i < n;i++)
    {
        for(char j = 'A'; j <= 'A' + i;j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
    cout << endl;

}