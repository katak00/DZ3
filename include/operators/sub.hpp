#pragma once

#include <string>

#include "astnode.hpp"




class Sub : public ASTNode {
public:
    Sub(ASTNode* left, ASTNode* right) : ASTNode("-", left, right) {};
    ~Sub()
    {
        ((ASTNode*)this)->~ASTNode();
    }
};