//Given two strings s and part, perform the following operation on s 
//until all occurrences of the substring part are removed:

string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());

        }

        return s;
}
