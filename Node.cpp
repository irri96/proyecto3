#include "Node.h"
#include <iostream>

using namespace std;


Node::Node(string str,int ind){
	name=str;
	index=ind;
	in=new vector<Node*>();
	out=new vector<Node*>();
}

Node::~Node(){
	delete in;
	delete out;
}

int Node::getIndex(){
	return index;
}

string Node::getName(){
	return name;
}

vector<Node*>* Node::getIn(){
	return in;
}

vector<Node*>* Node::getOut(){
	return out;
}

void Node::addIn(Node *a){
	in->push_back(a);
}

void Node::addOut(Node *a){
	out->push_back(a);
}

int Node::outDeg(){
	return out->size();
}

int Node::inDeg(){
	return in->size();
}