//ex:-the sky is blue
//out:- blue is sky the

string reverseWords(string s) {
         int n = s.size();
        int start = 0, end = n - 1;
        
        // Removing leading spaces
        while (s[start] == ' ')
            start++;
        
        // Removing trailing spaces
        while (s[end] == ' ')
            end--;
        
        string ans = "";
        int ostart = start;
        string str = "";
        
        for (int i = ostart; i <= end; i++) {
            if (s[i] == ' ') {
                // Reversing and adding the word to the answer
                str = s.substr(start, i - start);
                str += ' ';
                str += ans;
                ans = str;
                
                // Skipping consecutive spaces
                while (s[i] == ' ') {
                    i++;
                }
                start = i;
                i--;
            }
        }
        
        // Adding the last word to the answer
        str = s.substr(start, (end + 1) - start);
        str += ' ';
        str += ans;
        ans = str;
        
        // Removing trailing space if present
        if (ans[ans.size() - 1] == ' ')
            ans.pop_back();
        
        return ans;
    
    
    }
