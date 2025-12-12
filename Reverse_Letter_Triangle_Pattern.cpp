#include <iostream>
using namespace std;

int main()
{

    cout << endl << "Reverse Letter Triangle Pattern" << endl;

    int n;
    cout << "Enter height of traingle : ";
    cin >> n;
    cout << endl << endl;

    for(int i = 0; i < n;i++)
    {
        for(int i= 0; i < n-i;i++)
        {
            cout << "   ";
        }
        for(char a = 'A'; a <= 'A' + (n-i-1);a++ )
        {
            cout << " " << a << " ";
        }
        cout << endl;
    }
    cout << endl;

}