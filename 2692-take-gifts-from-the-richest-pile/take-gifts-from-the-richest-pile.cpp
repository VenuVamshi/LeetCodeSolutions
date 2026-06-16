class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<int> pq;
        int n = gifts.size();

        for(int i = 0; i < n; i++){
            pq.push(gifts[i]);
        }

        for(int i = 0; i < k; i++){

            int x = pq.top();pq.pop();

            pq.push(sqrt(x));
        }

        long long sum = 0;
        while(!pq.empty()){
            sum += pq.top();pq.pop();
        }

        return sum;
    }
};