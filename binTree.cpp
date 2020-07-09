#include "binTree.h"

template<class Data>
inline BinNode<Data>* binTree<Data>::genNode(Data data)
{
	return new BinNode(data);
}