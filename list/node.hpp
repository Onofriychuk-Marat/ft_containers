#ifndef NODE_HPP
#define NODE_HPP

template<typename T>
class Node
{
public:
    Node	*prev;
    Node	*next;
    T		data;

    Node(T data = T()): data(data), prev(0), next(0) {}
    Node(): prev(0), next(0) {}
    Node(Node *prev, Node *next, T data = T()): data(data), prev(prev), next(next) {}

    Node(const Node &n)
    {
        this->next = n.next;
        this->data = n.data;
        this->prev = n.prev;
    }
};

#endif