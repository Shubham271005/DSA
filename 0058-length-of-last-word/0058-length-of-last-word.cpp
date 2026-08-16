class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(s.find_last_not_of(' ') + 1);
        int n = s.size();
        int ans = 0;
        for(int i=n-1; i>=0; i--){
            if(s[i] == ' ') break;
            ans++;
        }
        return ans;
    }
};