class Solution {
public:  
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        priority_queue<int> pq;
        int i =0;
        for(;i<n-1;i++){
            int d = heights[i+1] -heights[i];
           
           if(d > 0)
           {
               if( d <= bricks)
               {
                   bricks -= d;
                   pq.push(d);
               }
               else if(ladders > 0)
               {
                   if(pq.size())
                   { 
                       int x= pq.top();
                       if(x > d)
                       {
                           pq.pop();
                           bricks += x ;
                           pq.push(d);
                           bricks -= d;
                       }
                   }
                   ladders --;
               }
               else 
                   break;
           }
           
        }
        return i;
    }
};
