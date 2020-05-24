int ret=0;
void fun(TreeNode* root,vector<int> c)
{
	if(root)
	{
		c[root->val]++;
		int cout=0;
		if(root->left==NULL&&root->right==NULL)
		{
			for(int x:c)
				if(x%2!=0)
					cout++;
			if(cout<=1)
				++ret;
		}
		else
		{
			fun(root->left,c);
			fun(root->right,c);
		}


	}
}
int pseudoPalindromicPaths (TreeNode* root) 
{
	vector<int> count(10,0);    
	fun(root,count);
    return ret;
}
