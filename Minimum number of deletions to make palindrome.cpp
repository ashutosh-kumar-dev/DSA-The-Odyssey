// =============== lcs=====================

int minDeletions(string s1, int n) { 
    
    
    string s2= s1;
    reverse(s2.begin(), s2.end());
    
    int m= s1.length();
    
    vector<vector<int>> t(m+1,vector<int>(m+1,0));
    
    for(int i=1;i<m+1;i++){
        for(int j=1; j<m+1 ; j++){
            if(s1[i-1]==s2[j-1]){
                t[i][j]= 1+ t[i-1][j-1];
            }
            else t[i][j]= max(t[i-1][j], t[i][j-1]);
        }
    }
    
    return s1.length() - t[m][n];
    
    