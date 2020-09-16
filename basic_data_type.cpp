/*Input Format

Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

sample input:3 12345678912345 a 334.23 14049.30493
sample output:
3
12345678912345
a
334.230
14049.304930000
*/

/*solution*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long a;
    long b;
    char c;
    double d;
    long double e;

    cin>>a;
    cout<<a<<""<<endl;

    cin>>b;
    cout<<b<<""<<endl;

    cin>>c;
    cout<<c<<""<<endl;

    cin>>d;
    cout.precision(10);
    cout<<d<<""<<endl;
  
    cin>>e;
    cout.precision(10);
    cout<<e<<""<<endl;

    return 0;
}
