class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
       vector<int> vis(n,0);
        vis[0] = 1;
            stack<int> s;
        for(int i = 0; i <rooms[0].size(); i++)
            s.push(rooms[0][i]);
       while(!s.empty())
       {
           int x = s.top();
           s.pop();
           vis[x] = 1;
           for(int i = 0; i < rooms[x].size(); i++)
              if(!vis[rooms[x][i]])
                  s.push(rooms[x][i]);
       }
        for(int i = 1; i < n; i++)
            if(vis[i] == 0)
                return false;
        return true;
    }
};