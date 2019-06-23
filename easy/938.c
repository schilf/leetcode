int rangeSumBST(struct TreeNode* root, int L, int R){
    if(root == NULL)
        return 0;
    
    if(L == root->val)
        return rangeSumBST(root->right,L,R) + root->val;
        
    if(R == root->val)                                                                         
	return rangeSumBST(root->left,L,R) + root->val;

    if(root->val >= L && root->val <= R)
        return rangeSumBST(root->left,L,R) + rangeSumBST(root->right,L,R) + root->val;

    return rangeSumBST(root->left,L,R) + rangeSumBST(root->right,L,R);
}
