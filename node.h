#pragma once
class node
{
};

template<class Data>
class BinNode :public Node
{
public:
	BinNode<Data>* left = nullptr;
	BinNode<Data>* right = nullptr;
	Data data;
	BinNode(Data curData = 0) {
		data = curData;
	}
#if SAFETY == 1
	~BinNode()
	{
		std::cout << "delete begin" << std::endl;
		delete left;
		delete right;
		std::cout << "delete end" << std::endl;
	}
#endif
};

template<class Data>
class SBTNode :public BinNode<Data>
{
protected:
	inline void refreshSize()
	{
		this->size = 1;
		if (this->left)
			this->size += this->left->size;
		if (this->right)
			this->size += this->right->size;
	}
public:
	int size = nullptr;
};