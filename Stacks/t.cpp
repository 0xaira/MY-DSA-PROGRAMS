// Maximum Area in the Histogram
#include <bits/stdc++.h>
using namespace std;
#include <Math.h>

void largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> s;
        vector<int> left;
        int pseudo_index = -1;
        for(int i=0;i<heights.size();i++)
        {
            if(s.size()==0)
                left.push_back(pseudo_index);
            else if(s.size()>0 && s.top().first<heights[i])
                left.push_back(s.top().second);
            else if(s.size()>0 && s.top().first>=heights[i])
            {
                while(s.size()>0 && s.top().first>=heights[i])
                    s.pop();
                if(s.size()==0)
                    left.push_back(pseudo_index);
                else
                    left.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }

        vector<int> right;
        pseudo_index = heights.size();
        for(int i=heights.size()-1;i>=0;i--)
        {
            if(s.size()==0)
                right.push_back(pseudo_index);
            else if(s.size()>0 && s.top().first<heights[i])
                right.push_back(s.top().second);
            else if(s.size()>0 && s.top().first>=heights[i])
            {
                while(s.size()>0 && s.top().first>=heights[i])
                    s.pop();
                if(s.size()==0)
                    right.push_back(pseudo_index);
                else
                    right.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }
        reverse(right.begin(),right.end());

        int width[heights.size()];
        for(int i=0;i<heights.size();i++)
            width[i] = right[i]-left[i]-1;

        int area[heights.size()];
        for(int i=0;i<heights.size();i++)
            area[i] = width[i]*heights[i];
        
        int max_area = heights[0];
        for(int i=0;i<heights.size();i++){
                if(area[i]>max_area)
                    max_area = area[i];
        }
            

        cout<<max_area;
}
int main(){
    vector<int> arr = {0,9};
    largestRectangleArea(arr);
    return 0;
}