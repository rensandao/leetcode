/****************************************************************
source: 
Author: rensandao
Date: 2018-12-08

Code format and structure reference: 
https://github.com/pezy/LeetCode/blob/master/093.%20Binary%20Tree%20Inorder%20Traversal/solution.h
Algorithm reference:
PDF-> https://github.com/soulmachine/leetcode 
****************************************************************/
#include<vector>
#include<stack>
using namespace std; // std::vector, std::stack

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        TreeNode *temp = root;
        
        while (!st.empty() || temp != nullptr ) {
            if(temp != nullptr){
                st.push(temp);
                temp = temp->left;
            }
            else{
                temp = st.top();
                res.push_back(temp->val);
                st.pop();
                
                temp = temp->right;            
            }           
        }
             
        return res;   
    }
};
