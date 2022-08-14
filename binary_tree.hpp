#pragma once

#include "others.hpp"

namespace ft {

    template <class K, class T>
    struct bt_node {
    public:
        bt_node *left;
        bt_node *right;
        bt_node *parent;

        ft::pair<K, T> element;

        bt_node(const ft::pair<const K, T> &_element) : left(NULL), right(NULL), parent(NULL), element(_element) {}
        bt_node(ft::pair<const K, T> &_element) : left(NULL), right(NULL), parent(NULL), element(_element) {}
        // bt_node() : left(NULL), right(NULL), parent(NULL), element(NULL) {}
    };


};