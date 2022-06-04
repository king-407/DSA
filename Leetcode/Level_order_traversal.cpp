   vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        int i;
        int j=0;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        int count=0;
                                                                     
        while(!q.empty())
        {
            count=q.size();
            vector<int> temp;
            for(i=0;i<count;i++)
            {
                TreeNode* curr=q.front();                       
                q.pop();
                temp.push_back(curr->val);
                if(curr->left!=NULL)
                {
                    q.push(curr->left);
                }
                   if(curr->right!=NULL)
                {
                    q.push(curr->right);
                }
            }
            ans.push_back(temp);
        }
        vector<int> temp;
           
        
        //reversing the rows//
        
        for(i=0,j=ans.size()-1;i<j;i++,j--)
        {
            temp=ans[i];
            ans[i]=ans[j];
            ans[j]=temp;
        }
        return ans;
    }