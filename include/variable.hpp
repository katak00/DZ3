#pragma once

#include <string>

#include "astnode.hpp"

class Variable : public ASTNode {
public:
    Variable(std::string var)
        : ASTNode(var)
        , var_(var) {}

    std::string name() const { return var_; }
    ~Variable()
    {
        ((ASTNode*)this)->~ASTNode();
    }

private:
    std::string var_;
};
