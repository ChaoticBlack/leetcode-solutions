class Solution {
public:
    int arrangeCoins(int n) {
        long row_num=0;
        long coins_used=0;
        //long coins_used_per_row=0;
        do
        {
            
            row_num++;
            //coins_used_per_row=row_num;
            coins_used=coins_used+row_num;
            if(coins_used>n)
                return row_num-1;
            
        }while(coins_used<n);
        return row_num;
    }
};
