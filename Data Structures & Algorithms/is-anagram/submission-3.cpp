class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> v(26,0);
        if(t.size() != s.size())
         return false;

        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        for(int x : v)
        {
            if(x != 0)
             return false;
        }
        return true;
    }
};
