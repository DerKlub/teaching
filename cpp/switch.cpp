/*
How to run:

    g++ -o switch switch.cpp
    ./switch


*/



#include <iostream>
using namespace std;

int main()
{
    int n = -1;

    cout << endl << "Enter n: ";
    cin >> n;

    cout << "\nswitch result (break): ";
    switch(n)
    {
        case 1:
            cout << "1" << endl;
            break;
        case 2:
            cout << "2" << endl;
            break;
        case 3:
            cout << "3" << endl;
            break;
        case 4:
            cout << "4" << endl;
            break;
        default:
            cout << n << endl;
    }

    cout << "\nswitch result (no break): ";
    switch(n)
    {
        case 1:
            cout << "1" << endl;
        case 2:
            cout << "2" << endl;
        case 3:
            cout << "3" << endl;
        case 4:
            cout << "4" << endl;
        default:
            cout << n << endl;
    }

    cout << "\nif-else result: " ;
    if (n == 1) {
        cout << "1" << endl;
    } else if (n == 2) {
        cout << "2" << endl;
    } else if (n == 3) {
        cout << "3" << endl;
    } else if (n == 4) {
        cout << "4" << endl;
    } else {
        cout << n << endl;
    }
    cout << "\n";

    return 0;    
}