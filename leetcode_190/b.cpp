int maxVowels(string s, int k) {
int ret=0;
    for(int i=0;i<k;++i)
    	if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
    		++ret;
int temp=ret;
    for(int i=k;i<s.length();++i)
    {
    	if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='o'||s[i-k]=='i'||s[i-k]=='u')
    		--temp;
    	if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
    		++temp;
    	ret=max(ret,temp);
    }
    return ret;

}
