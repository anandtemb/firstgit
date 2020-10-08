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






 #include<iostream>
 using namespace std;
 int main(){
     int t,r,c,row,col,arr[row][col];
     cin>>t;
     for(int i=0; i<t; i++){
         cin>>r>>c;
         for(row=0; row<r; row++){
             for(col=0; col<c; col++){
                 cin>>arr[row][col];
                 //cout<<arr[row][col];
             }
             //cout<<endl;
         }
     }
 }
