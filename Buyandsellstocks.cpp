class Solution {
public:
  void findMaxProfit(vector<int>& prices,int day,int& minPrice,int& maxProfit,int &curprofit)
  {
      //base Case
      if(day==prices.size())
      {
          return;
      }
      if(prices[day]<minPrice)
      minPrice=prices[day];
      curprofit=prices[day]-minPrice;
      if(curprofit>maxProfit)
      maxProfit=curprofit;

      //Recursive call
      findMaxProfit(prices,day+1,minPrice,maxProfit,curprofit);

  }

    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit=INT_MIN;
        int curprofit=0;
        findMaxProfit(prices,0,minPrice,maxProfit,curprofit);
        return maxProfit;
    }
};
