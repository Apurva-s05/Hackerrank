// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n);

// Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];

        cout << MissingNumber(array, n) << "\n";
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

int MissingNumber(vector<int>& array, int n) {

    
    int calculatedSum = (n*(n+1))/2;      //Formula for calculating natural number sum
    int sum=0;
    for (int i=0;i<n-1;i++)
    {
        sum += array[i];
        
    }
    
    return(calculatedSum-sum);
   }
    // Your code goes here
