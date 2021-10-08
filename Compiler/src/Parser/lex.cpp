#include "Lex.h"



Lex::Lex()
{
    //ctor


}

Lex::~Lex()
{
    //dtor
}

string  Lex::Analysis(string tok_input){
  return tok_input;
}

void Lex::Clear(){
this->token="";
}
