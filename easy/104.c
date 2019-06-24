int max(int a ,int b);

int maxDepth(struct TreeNode* root){
    if(root == null)
        return 0;
    return max(maxDepth(root->left),maxDepth(root->right)) + 1;
}

int max(int a ,int b){
    return a>b?a:b;
}
