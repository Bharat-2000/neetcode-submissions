class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1;
        int j = *max_element(piles.begin(), piles.end());
        int k = j;

        while(i <= j){
            int middle = (i+j)/2;
            bool flag = timeTaken(piles, middle, h);
            if(flag){
                k = min(k, middle);
                j = middle -1;
            }else{
                i = middle + 1;
                // k = max(k, middle);
            }
        }
        return k;
    }

    bool timeTaken(vector<int> &piles, int k, int h){
        int response = 0;
        for(auto it: piles){
            response += it/k + (it%k != 0);
        }
        return response <= h ? true : false;
    }
};

/* h = 4

k = (4 -> 25)

i      
          j
[4,10,23,25]

h=4
[25,10,23,4]

*/