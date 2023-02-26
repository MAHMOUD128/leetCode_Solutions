class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
    {
        vector<string> v;
        map<string, int> m;
        int n = list1.size();
        int d = list2.size();
        int min_sum = INT_MAX;
        for (int i = 0; i < n ; i++)
        {
            m[list1[i]] = i;
        }
        for (int i = 0; i < d ; i++) {
            auto it = m.find(list2[i]);
            if (it != m.end()) {
                if (it->second + i < min_sum) {
                    v.clear();
                    min_sum = it->second + i;
                }
                if (it->second + i == min_sum) v.push_back(it->first);
            }
        }
        
        return v;
        
    }
};