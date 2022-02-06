#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number
// of operations
int minOperations(int n)
{
int ans = 0;
 while(n > 1){
if(n%3==0)
{
 n=n/3;
 ans++;
}
else if(n%2==0)
{
 n=n/2;
 ans++;
}
else
{
  n--;
  ans++;
}
}     
return ans;       
}

// Driver Code
int main()
{
	int n = 15;
	cout << minOperations(n);
	return 0;
}
