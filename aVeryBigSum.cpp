/*
In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description
   Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):
   int ar[n]: an array of integers .

Return:
   long: the sum of all array elements
*/


/*solution*/

#include <bits/stdc++.h>

using namespace std;

int main(){
 long long n;
   cin>>n;
long long a[n];
  for(long i=0; i < n; i ++){
      cin>>a[i];
  }

long long sum = 0;
  for(long i=0; i < n; i ++){
      sum = sum + a[i];
  }
cout<<""<<sum;

    return 0;
}
