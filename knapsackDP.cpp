
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int f(int ind,int W,int profit[],int wt[],vector<vector<int>>&dp)
{   if(ind ==0)
{
    
    if(wt[0]<=W) return profit[0];
    else
    return 0;
    
    
}  
    if(dp[ind][W]!=-1) return dp[ind][W];
    int nottake=0+f(ind-1,W,profit,wt,dp);
    int take=INT_MIN;
    if(W>=wt[ind])
     take=profit[ind]+f(ind-1,W-wt[ind],profit,wt,dp);
    return dp[ind][W]=max(take,nottake);
}
int main()
{
    int profit[]={16,50,56};
    int wt[]={10,20,30};
    int maxi=30;
    int n=3;
    vector<vector<int>>dp(n,vector<int>(maxi+1,-1));
   
   int a=  f(n-1,maxi,profit,wt,dp);
   cout<<a;
    
    
