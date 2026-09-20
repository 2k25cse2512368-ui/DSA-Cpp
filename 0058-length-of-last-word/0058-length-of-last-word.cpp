class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        string f="";
        for(int i=0;i<s.size();i++){
            if(f.empty() && s[i]==' '){
                continue;
            }
            
            else if(!f.empty() && s[i]==' '){
                break;
            }
            else{
                f+=s[i];
            }
        }
        return f.size();
    }
};