class Solution {
public:
    string getHint(string secret, string guess) {
        int bl=0,i,p=0;
        map<int,int> m,m1,m2;

        for(i=0;i<secret.size();i++)
        {
            m1[secret[i]]++;
            m2[guess[i]]++;
        }

        for(i=0;i<secret.size();i++)
        {
            if(guess[i]==secret[i])
            {
                bl++;
                m[guess[i]]++;
            }
        }

        for(auto it:m1)
        {
            if(it.second!=0 && m2[it.first]!=0)
            {
                p = p+min(it.second,m2[it.first]);
                if(m[it.first]!=0)
                {
                    p = p-m[it.first];
                }
            }
        }
       


        return to_string(bl)+"A"+to_string(p)+"B";
    }
    
};