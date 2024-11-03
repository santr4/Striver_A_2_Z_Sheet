#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void f(Node *root, vector<int> &ans)
{
    if (root == nullptr)
    {
        return;
    }
    f(root->left, ans);
    ans.push_back(root->data);
    f(root->right, ans);
}

vector<int> inorder(Node *root)
{
    vector<int> ans;
    f(root, ans);
    return ans;
}

int main()
{
    vector<int> ans;
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    ans = inorder(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}