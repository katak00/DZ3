#pragma once

#include <string>

#include "astnode.hpp"




class Sub : public ASTNode {
public:
    Sub(ASTNode* left, ASTNode* right) : ASTNode("-", left, right)
    , left_(left)
    , right_(right){};
private:
    ASTNode* left_;
    ASTNode* right_;
};