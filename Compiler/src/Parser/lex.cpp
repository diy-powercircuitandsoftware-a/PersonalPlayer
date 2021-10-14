#include "Lex.hpp"
#include "FindComment.hpp"
#include "FindIdentifier.hpp"
#include "FindString.hpp"
#include "FindToken.hpp"

Lex::Lex()
{
    //ctor


}

Lex::~Lex()
{
    //dtor
}

std::vector<LexPositionNode>Lex::Analysis(string tok_input)
{
    FindComment findcomment;
    FindIdentifier findidentifier;
    FindString findstring;
    FindToken findtoken;
    //spilt newline and find // and insert commment
    tok_input=tok_input+"   ";


    for (unsigned i=0; i<tok_input.length()-1; ++i)
    {
        if (findstring.Activate==false)
        {
            findcomment.Analysis(tok_input.substr (i,2));
            if (findcomment.Skip())
            {
                continue;
            }
        }

        findstring.Analysis(tok_input.substr (i,1));
        if (findstring.Skip)
        {
            continue;
        }
        if (findstring.Complete)
        {
            struct LexPositionNode pos;
            pos.posstart=i;
            pos.value= findstring.Text;
            pos.tokentype="string";
            this->lexnode.push_back(pos);
            findstring.Text="";
            findstring.Complete=false;
        }


        findidentifier.Analysis(tok_input.substr (i,1));
        if (findidentifier.Skip)
        {
            continue;
        }
        if (findidentifier.Complete)
        {
            struct LexPositionNode pos;
            pos.posstart=i;
            pos.value= findidentifier.Text;
            pos.tokentype="identifier";
            this->lexnode.push_back(pos);
            findidentifier.Text="";
            findidentifier.Complete=false;
        }

        findtoken.Analysis(tok_input.substr (i,1));
        if (findtoken.Skip)
        {
            continue;
        }
        if (findtoken.Complete)
        {
              struct LexPositionNode pos;
              pos.posstart=i;
              pos.value= findtoken.Text;
              pos.tokentype="token";
              this->lexnode.push_back(pos);
               findtoken.Complete=false;
              findtoken.Text="";
        }



        if (this->tokenclass.IsOperator(tok_input.substr (i,2)))
        {
            struct LexPositionNode pos;
            pos.posstart=i;
            pos.value=tok_input.substr (i,2);
            pos.tokentype="operator";
            this->lexnode.push_back(pos);
            i++;
            continue;
        }
        if (this->tokenclass.IsOperator(tok_input.substr (i,1)))
        {
            struct LexPositionNode pos;
            pos.posstart=i;
            pos.value=tok_input.substr (i,1);
            pos.tokentype="operator";
            this->lexnode.push_back(pos);
            continue;
        }
        if (this->tokenclass.IsBrackets(tok_input.substr (i,1)))
        {
            struct LexPositionNode pos;
            pos.posstart=i;
            pos.value=tok_input.substr (i,1);
            pos.tokentype="bracket";
            this->lexnode.push_back(pos);
            continue;
        }
        if (this->tokenclass.IsSpecial(tok_input.substr (i,1)))
        {
            struct LexPositionNode pos;
            pos.posstart=i;
            pos.value=tok_input.substr (i,1);
            pos.tokentype="special";
            this->lexnode.push_back(pos);
            continue;
        }



    }


    for (int i = 0; i <  this->lexnode.size(); i++)
    {
        std::cout <<  this->lexnode.at(i).value+" is "+this->lexnode.at(i).tokentype<< '\n';
    }

    return this->lexnode;
}

void Lex::Clear()
{
    this->lexnode.clear();
}



