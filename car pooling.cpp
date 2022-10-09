 bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int> mp;
        for(int i=0;i<trips.size();i++)
        {
            int people = trips[i][0];
            int pick = trips[i][1];
            int drop = trips[i][2];
            mp[pick] += trips[i][0];
            mp[drop] -= trips[i][0];
        }
        int cap = 0;
        for(auto &it:mp)
        {
            cap += it.second;
            if(cap>capacity) return false;
        }
        return true;
    }
