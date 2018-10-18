#ifndef NODE_H
#define NODE_H

class Node {
	public:
		Node();
		float getData() const;
		void setData(float d);
		Node* getNodePtr() const;
		void setNodePtr(Node* n);
	private:
		float data;
		Node* nextPtr;
};

#endif
