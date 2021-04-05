
// Tree Level Wise
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class treeNode
{
public:
    int data;
    vector<treeNode *> children;

    treeNode(int x)
    {
        data = x;
    }
};


treeNode* takeInput(){
    int rootData;
    cout<<"enter rootData: ";
    cin>>rootData;
    treeNode* root=new treeNode(rootData);
    queue<treeNode*> qNode;
    qNode.push(root);
    while(qNode.size()!=0){
        treeNode* front=qNode.front(); 
        qNode.pop();
        int numChildren;
        cout<<"enter no of children of "<<front->data<<": ";
        cin>>numChildren;
        for(int i=0;i<numChildren;i++){
            int childData;
            cout<<"enter "<<i<<" th child of "<<front->data<<": "; 
            cin>>childData;
            treeNode* child=new treeNode(childData); 
            front->children.push_back(child);
            qNode.push(child);
        } 
    }
    return root;
}

void printTreeLevel(treeNode* root){
    queue<treeNode*> q;
    q.push(root);
    while(q.size()!=0){
        treeNode* f=q.front();
        cout<<f->data<<":";
        q.pop();
        for(int i=0;i<f->children.size();i++){
            cout<<f->children[i]->data<<" ";
            q.push(f->children[i]);
        }
        cout<<endl;
    }
}    

void printTree(treeNode *root)
{
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << " ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    // treeNode *root = new treeNode(1);
    // treeNode *n1 = new treeNode(2);
    // treeNode *n2 = new treeNode(3);
    // treeNode *n3 = new treeNode(4);
    // treeNode *n4 = new treeNode(5);
    // treeNode *n5 = new treeNode(6);
    // treeNode *n6 = new treeNode(7);
    // root->children.push_back(n1);
    // root->children.push_back(n2);
    // n1->children.push_back(n3);
    // n1->children.push_back(n4);
    // n2->children.push_back(n5);
    // n2->children.push_back(n6);

    // printTree(root);

    treeNode* root=takeInput();
    printTreeLevel(root);

    return 0;
}

/*
         1
       /   \   
      2     3   
     / \   /  \   
    4   5 6    7


output
1:2 3
2:4 5
3:6 7
4:
5:
6:
7:

*/
