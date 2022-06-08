class Solution {
public:
   
         int removePalindromeSub(string s) {
        int i;
        
     string g=s;
        reverse(s.begin(),s.end());
        if(g==s)
            return 1;
        else return 2;
            
        
    }
    
};