class NodeT
{
public:
    NodeT(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

    NodeT(int data, NodeT *left, NodeT *right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }

    int getData()
    {
        return data;
    }

    void setData(int data)
    {
        this->data = data;
    }

    NodeT *getLeft()
    {
        return this->left;
    }

    void setLeft(NodeT *left)
    {
        this->left = left;
    }

    NodeT *getRight()
    {
        return this->right;
    }

    void setRight(NodeT *right)
    {
        this->right = right;
    }

private:
    int data;
    NodeT *left;
    NodeT *right;
};
