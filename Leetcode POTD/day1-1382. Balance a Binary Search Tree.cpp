/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
*/

// approach will work = 
//1) convert into the array (sorted)
//2 ) create a binary search tree with help of sorted array 
// recursion leaf of faith

class Solution {
private:
    // we have inorder terversal code because it provide always sorted array
    void inorder(TreeNode* root, vector<int>& arr){
        if(root == nullptr) return;

        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    // convert sorted array into Binary search tree
    TreeNode* createBST(int start , int end, vector<int>&arr){
        if(start>end)return NULL;
        // find out the middle index 
        int mid = (start+end)/2;
        TreeNode * root = new TreeNode(arr[mid]);
        root->left = createBST(start,mid-1, arr);
        root->right = createBST(mid+1,end,arr);
        return root; // at the last you can return answer
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inorder(root,arr);

        // for create a complete binary search tree we will taking this index array of start and array of end ):
        int start = 0;
        int end = arr.size() -1;

       return createBST(start,end,arr);
    }
};