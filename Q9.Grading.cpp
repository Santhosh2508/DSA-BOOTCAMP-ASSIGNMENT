/* Q9. https://www.hackerrank.com/challenges/grading/problem */


#include <iostream>
using namespace std;

int main()
{
    int i, n, grade, rem;
    //cout << "Enter number of students : " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        //cout << "Enter the  grade of student " << i + 1 << endl;
        cin >> grade;
        if (grade >= 38)
        {
            rem = grade % 5;
            if (rem >= 3)
                grade += 5 - rem;
        }
        //cout <<"Final grade : "<< grade << endl;
    }
    return 0;
}