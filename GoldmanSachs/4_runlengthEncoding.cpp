#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    int count=1;
    string ans = "";
    ans+=src[0];
    for(int i=1;i<src.length();i++){
      if(src[i]!=src[i-1])
      {  
        ans+=to_string(count)+src[i];
        count=0;
      }
      count++; 
    }
    
    return ans+to_string(count);
}     
 
