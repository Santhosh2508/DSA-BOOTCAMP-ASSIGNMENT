/* Write a program to swap to two numbers*/
/*b. By without using third variable*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "Before Swaping : a =" << a << " and b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swaping : a =" << a << " and b = " << b << endl;
    return 0;
}