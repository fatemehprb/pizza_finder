#include "BasicNode.h"
bool BasicNode::operator==( BasicNode b) {
	if (this->coordinates == b.coordinates)return true;//if two node has same coordinates they are one node
	return false;
}
BasicNode& BasicNode:: operator= (BasicNode node) {
	coordinates = node.coordinates;
	name = node.name;
	left = node.left;
	right = node.right;
	return *this;
}