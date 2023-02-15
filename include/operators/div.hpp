#pragma once

#include <string>

#include "astnode.hpp"




class Div : public ASTNode {
public:
    Div(ASTNode* left, ASTNode* right) : ASTNode("/", left, right) {};
    ~Div()
    {
       ((ASTNode*)this)->~ASTNode();
    }
};