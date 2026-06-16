class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector< vector<int> > res;
        int n = points.size();

        priority_queue< pair< double, pair<int,int> > > pq;

        for(auto v : points){
            double d = sqrt(pow(v[0],2)+pow(v[1],2));

            pq.push(make_pair(d,make_pair(v[0],v[1])));

            if (pq.size() > k) {
                pq.pop();
            }


        }
        while (!pq.empty()) {
            res.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }

        return res;
        }
};