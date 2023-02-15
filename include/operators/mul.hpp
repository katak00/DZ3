#pragma once

#include <string>

#include "astnode.hpp"




class Mul : public ASTNode {
public:
    Mul(ASTNode* left, ASTNode* right) : ASTNode("*", left, right) {};    
    ~Mul()
    {
        ((ASTNode*)this)->~ASTNode();
    }
};