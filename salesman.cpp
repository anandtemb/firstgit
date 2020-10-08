class Solution{
public:
    long long findSmallest(long long arr[], int n) {
        // code here
        int count=0,sum=0;
        if(arr[0]!=1){
            return 1;
        }
        else{
            for(int i=1; i<n; i++){
                if(arr[i]!=i+1){
                    return i+1;
                }
                count++;
            }
            if(count==n-1){
                for(int j=0; j<n; j++){
                    sum=sum+arr[j];
                }
                return sum+1;
            }

        }

    }
};






#include<iostream>
 using namespace std;
 int main(){
     int t,test,row,col,arr[row][col];
     //cin>>t;
    //for(test=0; test<t; test++){
     cin>>row>>col;
     for(int i=0; i<row; i++){
         for(int j=0; j<col; j++){
             cin>>arr[row][col];
             //cout<<arr[row][col];
         }
         //cout<<endl;
     }

    // cout<<endl;
   // }
 }
int maxProfit(int price[], int start, int end) 
{ 
  
    // If the stocks can't be bought 
    if (end <= start) 
        return 0; 
  
    // Initialise the profit 
    int profit = 0; 
  
    // The day at which the stock 
    // must be bought 
    for (int i = start; i < end; i++) { 
  
        // The day at which the 
        // stock must be sold 
        for (int j = i + 1; j <= end; j++) { 
  
            // If byuing the stock at ith day and 
            // selling it at jth day is profitable 
            if (price[j] > price[i]) { 
  
                // Update the current profit 
                int curr_profit = price[j] - price[i] 
                                  + maxProfit(price, start, i - 1) 
                                  + maxProfit(price, j + 1, end); 
  
                // Update the maximum profit so far 
                profit = max(profit, curr_profit); 
            } 
        } 
    } 
    return profit; 
} 
