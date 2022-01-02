// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        // L2 mathi L20 banav
        // L20[0] = L2[0]
        // L20[1] = R2[1]
        
        // if L20 is anywhere in b/w L1 and R1 no area
        
        // R10[0] = R1[0]
        // R10[1] = L1[1]
        
        // ifL20[0] < R10[0] or saem for one
        if((L2[0]> R1[0])||(L1[0]>R2[0]))
            return 0;
        if((R2[1] > L1[1])||(R1[1]>L2[1]))
            return 0;
        
        return 1 ;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends
