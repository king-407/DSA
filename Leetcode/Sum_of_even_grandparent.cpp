class Solution {
public:
    int sum=0;
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
      
        if(root->left!=NULL && root->left->left!=NULL)
        {
            if(root->val%2==0)
            sum+=root->left->left->val;
        }
          if(root->left!=NULL && root->left->right!=NULL)
        {
               if(root->val%2==0)
            sum+=root->left->right->val;
        }
        if(root->right!=NULL && root->right->left!=NULL)
        {
            if(root->val%2==0)
            sum+=root->right->left->val;
        }
          if(root->right!=NULL && root->right->right!=NULL)
        {
               if(root->val%2==0)
            sum+=root->right->right->val;
          }
              sumEvenGrandparent(root->left);
              sumEvenGrandparent(root->right);
              return sum;

              
        }
        
    
};