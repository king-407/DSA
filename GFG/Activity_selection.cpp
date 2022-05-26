 class Solution
{
    static bool comp(pair<int,int> a,pair<int,int> b)
    {
        return (a.second<b.second);
    }
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int,int>> p;
        int i;
        for(i=0;i<start.size();i++)
        {
            p.push_back({start[i],end[i]});
            
        }
        sort(p.begin(),p.end(),comp);
        int prev=0;~
        int ans=1;
        for(i=1;i<p.size();i++)
        {
            if(p[prev].second<p[i].first)
            {
                ans++;
                 prev=i;
            }
           
        }
        return  ans;
    }
};