#pragma once

#include <string>

#include "astnode.hpp"




class Div : public ASTNode {
public:
    Div(ASTNode* left, ASTNode* right) : ASTNode("/", left, right)
    , left_(left)
    , right_(right){};
private:
    ASTNode* left_;
    ASTNode* right_;
};