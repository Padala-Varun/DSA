//LeetCode-860, Lemonade Change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fc=0,tc=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5){
                fc++;
            }
            else if(bills[i]==10)
            {
                if(fc==0)return 0;
                else{
                fc--;
                tc++;
                }
            }
            else{
                if(tc>=1&&fc>=1){
                    fc--;
                    tc--;
                }else if(fc>=3){
                    fc-=3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};