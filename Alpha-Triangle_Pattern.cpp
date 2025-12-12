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
        for(char a = 'E'; a < 'E'+i+1;a++)
        {
            char b = a -i;
            cout << " " << b << " ";
            
        }
        
        cout << endl;
    }
    cout << endl;

}