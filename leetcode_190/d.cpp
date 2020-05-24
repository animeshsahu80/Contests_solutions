vector<vector<int>> memo;
bool flag=true;
int dp(int i,int j,vector<int>& a,vector<int>& b)
{
	if(i>=a.size()||j>=b.size())
		return 0;
	if(memo[i][j]!=-1)
		return memo[i][j];
	int taken=a[i]*b[j]+dp(i+1,j+1,a,b);
	int not_taken=max(dp(i+1,j,a,b),dp(i,j+1,a,b));
    if(taken>not_taken)
        flag=false;
	return memo[i][j]=max(taken,not_taken);
}
int maxDotProduct(vector<int>& nums1, vector<int>& nums2) 
{
       memo.resize(nums1.size(),vector<int>(nums2.size(),-1));
    int val=dp(0,0,nums1,nums2);
    if(flag){
        int ret=nums1[0]*nums2[0];
        for(int i=0;i<nums1.size();++i)
            for(int j=0;j<nums2.size();++j)
                ret=max(ret,nums1[i]*nums2[j]);
    return ret;
    }
                
       return val; 
}