#pragma once

#include <string>

#include "astnode.hpp"




class Add : public ASTNode {
public:
    Add(ASTNode* left, ASTNode* right) : ASTNode( "+", left, right) {};
    ~Add()
    {
        ((ASTNode*)this)->~ASTNode();
    }
};