#include<iostream>
using namespace std;

int add(int n);

int main()
{
    int n,a;

    cout << "Enter a positive integer: ";
    cin >> n;
    a=n-1;
    cout << "Sum =  " << add(a);

    return 0;
}

int add(int (a))
{
    if(a != 1)
        return (a) + add(a - 1);
    return 0;
}