/*
Alice wrote a sequence of words in CamelCase as a string of letters, , having the following properties:

It is a concatenation of one or more words consisting of English letters.
All letters in the first word are lowercase.
For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.
Given , print the number of words in  on a new line.

For example, . There are  words in the string.

Function Description

Complete the camelcase function in the editor below. It must return the integer number of words in the input string.

camelcase has the following parameter(s):

s: the string to analyze
Input Format

A single line containing string .

Constraints

Output Format

Print the number of words in string .

Sample Input

saveChangesInTheEditor
Sample Output

5
Explanation

String  contains five words:

save
Changes
In
The
Editor
Thus, we print  on a new line.*/


#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {

int count=1;    
getline(cin,s);

for(int i=0;i<s.length();i++){
    /*The isupper() function checks if s[i] is in uppercase*/
    if(isupper(s[i])){
           count=count+1;
    }else{
    count=count;
 }
}
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
