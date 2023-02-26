class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() <= 2) return true;
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        for(int i=2;i<coordinates.size();i++){ // i=2 se start coz i=0 & i=1 ko phele hi use kr liya
            int x = coordinates[i][0]; //variable x
            int y = coordinates[i][1]; //variable y
            if((y2 - y1) * (x1 - x) != (y1 - y) * (x2 - x1)) //equating slop at any point
                return false;
        }
        return true;
    }
};