vector minimumNumberOfCoins(vector<int> &coins, int amount)
{
    vector<int>ans;
    vector.sort(coins.begin(),coins.end());
    int n=coins.size();
    for(int i=n-1;i>=0;i--)
    {
        while(amount>=coins[i])
        {
            ans.push_back(coins[i]);
            amount-=coins[i];
        }
    }
    return ans;
}