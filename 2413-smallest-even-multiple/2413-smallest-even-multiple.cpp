class Solution {
public:
    int smallestEvenMultiple(int n) {
        int val=1;
        while(1){
            if(val%2==0 && val%n==0){
                break;
            }
            val++;
        }
        return val;
    }
};