#pragma once
#include "node.h"

template<class Data>
class binTree
{
protected:
	BinNode<Data>* root = nullptr;
	BinNode<Data>* genNode(Data data);
};
