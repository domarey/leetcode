class Solution {
public:
    struct TreeNode{
        int data;
        vector<TreeNode*> children;
        int n_children;
    }

    TreeNode* createNode(int data){
        TreeNode* newNode = new TreeNode();
        newNode->data = data; // (*newNode).data = data
        return newNode;
    }

    int treeDepth(TreeNode* node) {
        if (node == NULL) {
            return 0;
        }
        int maxDepth = 0;
        for (vector<TreeNode*>::iterator it = node->child.begin(); it != node->child.end(); it++) {
            maxDepth = max(maxDepth, findDepthOfTree(*it));
        }
        return maxDepth + 1;
    }

    // Function to insert
    void insert(Node* root, int num){
        // Root is empty then the node will become the root
        if (!root){
            root = node;
        } 
        else{
            if (num % root->data == 0){
                // Recursive approach to
                // insert the child
                int n_children = root->child.size();
                for(int i = 0; i < n_children; i++){
                    if (num % root->child[i]->val == 0)
                        insert(root->child[i], num, node);
                    else
                        insert(root->child[i], num, node);
                }
            } 
            else{
                root->child.push_back(node);
                
            }
        }
    }

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        TreeNode* root = createNode(nums[0]);
        vector<TreeNode*> roots;
        roots.push_back(root)
        for(int i = 1; i < nums.size(); i++){
            for(auto root : roots){
                for(auto child : )
                    if()
            }
            
        }
        return answer;
    }
};
