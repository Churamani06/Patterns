#include <iostream>
using namespace std;

int main()
{

    cout << endl << "Alpha-Hill Pattern" << endl;

    int n;
    cout << "Enter height of traingle : ";
    cin >> n;
    cout << endl << endl;

    for(int i = 0; i < n;i++)
    {
        for(int j= 0; j < n-i-1;j++)
        {
            cout << "   ";
        }
        char a = 'A';
        for(int j= 0; j < 2*i+1;j++)
        {
            cout << " " << a << " ";
            if(j < (2*i+1)/2)
                a = a + 1;
            else 
                a = a - 1;
        }
        cout << endl;
    }
    cout << endl;

}