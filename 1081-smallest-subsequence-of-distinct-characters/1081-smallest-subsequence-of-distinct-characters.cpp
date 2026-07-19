class Solution {
public:
    string smallestSubsequence(string s) {


    unordered_map<char ,int>last;
    unordered_set<char>used;

    for(int i=0 ;i<s.size();i++){
        last[s[i]] =i;
    }

    string ans;
    

    for( int i=0 ;i<s.size();i++){
        if(used.count(s[i]))continue;
        while(!ans.empty() && ans.back()>s[i] && i<last[ans.back()]){
        used.erase(ans.back());
         ans.pop_back();
        }
        ans.push_back(s[i]);
        used.insert(s[i]);
       
    }
    return ans;


    }
};