#include <bits\stdc++.h>
using namespace std;

class Solution
{
    public:
    int data;
    Solution *left;
    Solution *right;
};

Solution *createNode(int x)
{
    Solution *temp = (Solution *)malloc(sizeof(Solution));

    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

vector<int>postorderTraversal(Solution *root)
{
    vector<int>num;
    if(root == NULL)
    return num;

    
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    num.push_back(root->data);
    cout<<root->data<<" ";
    
    return num;    
}


int main()
{
   Solution *root = NULL;
   root = createNode(1);
   root->left = createNode(2);
   root->right = createNode(3);

   postorderTraversal(root);
   cout<<endl;

    return 0;
}