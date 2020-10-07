/*
Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

Its length is at least .
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+
She typed a random string of length  in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

Note: Here's the set of types of characters in a form you can paste in your solution:

numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"
Input Format

The first line contains an integer  denoting the length of the string.

The second line contains a string consisting of  characters, the password typed by Louise. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.

Constraints

Output Format

Print a single line containing a single integer denoting the answer to the problem.

Sample Input 0

3
Ab1
Sample Output 0

3
Explanation 0

She can make the password strong by adding  characters, for example, $hk, turning the password into Ab1$hk which is strong.

 characters aren't enough since the length must be at least .

Sample Input 1

11
#HackerRank
Sample Output 1

1
Explanation 1

The password isn't strong, but she can make it strong by adding a single digit.*/

#include <bits/stdc++.h>

using namespace std;

/*// Complete the minimumNumber function below.
int minimumNumber(int n, string s) {
    // Return the minimum number of characters to make the password strong
   int count=0;
   for(int i = 0; i < s.length(); i++){

    if(s[i] >= '0' && s[i] <= '9') {
        count++;
    }

    if(s[i] >= 'a' && s[i] <= 'z') {
        count++;
    }

    if(s[i] >= 'A' && s[i] <= 'Z') {
        count++;
    }

    if(s.length()<6){
        count = 6 - s.length();
    }
    int lengthDifference = 6 - s.length();

    if(lengthDifference > 0 && count <= lengthDifference) {
        return lengthDifference;
    }
   }
    return count;
}
   
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
*/
int CharFamily(char c) 
{
   if(c >= '0' && c <= '9') return 0;
   if(c >= 'a' && c <= 'z') return 1;
   if(c >= 'A' && c <= 'Z') return 2;
   return 3;
}

int main() 
{
    int n; cin >> n;
    char c;
    bitset<4> mask;

    while (cin >> c)
    {
        mask.set(CharFamily(c));
    }
    cout << max(6-n, 4-(int)mask.count());
}
