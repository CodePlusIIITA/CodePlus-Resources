class Solution {
public:
    bool check(int k, int h, vector<int> &piles) {
        int n = piles.size();
        long long time = 0;

        for(auto &x: piles) 
            time += (x + k - 1) / k;

        return (time <= h);
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 1e9 + 10, ans = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(check(mid, h, piles)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};