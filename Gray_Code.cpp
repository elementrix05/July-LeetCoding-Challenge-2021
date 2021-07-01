class Solution {
public:
    int bin(string c)
    {
        int ans = 0;
        for(auto x:c)
        {
            ans = ans*2  + (x-'0');
        }
        return ans;
    }
    vector<int> grayCode(int n) {
        if(n==0)return {0};
        if(n==1)return {0,1};
        vector<string>vect;
        vector<string>ans;
        ans.push_back("0");
        ans.push_back("1");
        for(int i=1;i<n;i++)
        {
            vector<string>temp;
            for(auto c: ans)
            {
                c.insert(c.begin(),'0');
                temp.push_back(c);
            }
            for(int k=ans.size()-1;k>=0;k--)
            {
                ans[k].insert(ans[k].begin(),'1');
                temp.push_back(ans[k]);
            }
           ans = temp;
        }
        vector<int>ans1;
        for(auto c: ans)
        {
            ans1.push_back(bin(c));
        }
        return ans1;
    }
};
class Solution {
public:
    int bin(string c)
    {
        int ans = 0;
        for(auto x:c)
        {
            ans = ans*2  + (x-'0');
        }
        return ans;
    }
    vector<int> grayCode(int n) {
        if(n==0)return {0};
        if(n==1)return {0,1};
        vector<string>vect;
        vector<string>ans;
        ans.push_back("0");
        ans.push_back("1");
        for(int i=1;i<n;i++)
        {
            vector<string>temp;
            for(auto c: ans)
            {
                c.insert(c.begin(),'0');
                temp.push_back(c);
            }
            for(int k=ans.size()-1;k>=0;k--)
            {
                ans[k].insert(ans[k].begin(),'1');
                temp.push_back(ans[k]);
            }
           ans = temp;
        }
        vector<int>ans1;
        for(auto c: ans)
        {
            ans1.push_back(bin(c));
        }
        return ans1;
    }
};
