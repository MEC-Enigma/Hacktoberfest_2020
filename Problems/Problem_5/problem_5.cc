#include <iostream>
using namespace std;

int main()
{

   int n;

    cout << "Enter the number you want to print multiplication table for upto 1\
2: ";
    cin >> n;
    for (int i = 1; i <= 12; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

 return 0;
}

