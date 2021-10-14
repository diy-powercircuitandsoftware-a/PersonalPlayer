#include "Tokens.hpp"

Tokens::Tokens()
{
    //ctor
}

Tokens::~Tokens()
{
    //dtor
}

bool Tokens::IsBrackets(string s){
    return (std::count(this->Brackets_Types.begin(), this->Brackets_Types.end(), s));
}
bool Tokens::IsOperator(string s){
    return (std::count(this->Operator_Types.begin(), this->Operator_Types.end(), s));
}
bool Tokens::IsSpecial(string s){
    return (std::count(this->Special_Types.begin(), this->Special_Types.end(), s));
}
/*
$identifier
constructor=> pubkuc classname
 destructor =>pubkuc !classname
*/
