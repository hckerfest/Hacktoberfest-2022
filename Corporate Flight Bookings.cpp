 vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
         vector<int> sol(n,0);
         for(int i=0;i<bookings.size();i++)
         {
             sol[bookings[i][0]-1] += bookings[i][2];
             if(bookings[i][1]!=n)
             sol[bookings[i][1]] -= bookings[i][2];
         }
         for(int i=1;i<sol.size();i++)
         {
             sol[i] += sol[i-1];
         }
         return sol;
    }
