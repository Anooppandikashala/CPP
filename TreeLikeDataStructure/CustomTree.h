#ifndef ENGINEERING_CONNECTION_DATA_H
#define ENGINEERING_CONNECTION_DATA_H

class BinarySearchTree
{
    
    struct node
    {
        int data;
        node* left;
        node* right;
        int countL;
        int countR;
        
    };

    node* root;
    
    node* insert(int data, node *root_)
    {
        if(root_  == NULL)
        {
            root_ = new node;
            root_->data = data;
            root_->left = NULL;
            root_->right = NULL;
            root_->countL = 0;
            root_->countR = 0;
        }
        else
        {
            if(data < root_->data)
            {
                root_->left =  insert(data,root_->left);
                root_->countL++;
            }
            else if(data > root_->data)
            {
                root_->right =  insert(data,root_->right);
                root_->countR++;
            }
            
        }

        return root_;
    }
    void inorder(node* root_)
    {
        if( root_ == NULL)
            return;
        inorder( root_->left);
        std::cout <<  root_->data << " ";
        inorder( root_->right);
    }

public:

    BinarySearchTree()
    {
        root = NULL;
    }

    void insert(int x)
    {
        root = insert(x, root);
    }
    void display()
    {
        inorder(root);
    }
    

};



#endif
