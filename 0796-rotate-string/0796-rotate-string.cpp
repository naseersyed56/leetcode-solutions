class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() !=goal.size())return false;
        if(s == goal)return true;

        for(int i=0 ;i<s.size();i++){

            char e=s[0];
            s.erase(0,1);
            s.push_back(e);
               if(s == goal)return true;
        }
        return false;

    }
};