/*Q10.  https://www.hackerrank.com/challenges/camelcase/problem */


#include <iostream>
#include <string>

using namespace std;
int main()
{
    int i, t = 1;
    string s;
    cout << "Enter the Sentence : " << endl;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (isupper(s[i]))
            t++;
    cout << t << endl;
    return 0;
}