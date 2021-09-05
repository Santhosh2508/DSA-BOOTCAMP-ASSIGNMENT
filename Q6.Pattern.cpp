/*Print this pattern using loops
For n=5
	    *
	   * *
	  * * *
	 * * * *
	* * * * * */

#include <iostream>
using namespace std;

int main()
{
    int i, j, n = 5, k = 0;
    //cout<<"Enter number of rows: ";
    //cin>>n;
    for (i = 1; i <= n; i++, k = 0)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        while (k != 2 * i - 1)
        {
            cout << "*";
            k++;
        }
        cout << endl;
    }
    return 0;
}