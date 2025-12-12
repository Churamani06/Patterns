#include <iostream>
using namespace std;

int main()
{

    cout << endl << " Alpha-Ramp Pattern " << endl;

    int n;
    cout << "Enter height of traingle : ";
    cin >> n;
    cout << endl << endl;

    int k = 1;
    for(char a = 'A'; a <= 'A' + n;a++ )
    {
        for(int i = 0;i < k;i++)
        {
            cout << " " << a << " ";
        }
        k+=1;
        cout << endl;
    }
    cout << endl;

}