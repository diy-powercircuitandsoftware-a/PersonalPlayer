#include "Lex.h"
#include "FindComment.h"
#include "FindString.h"


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
    FindString findstring;
    tok_input=tok_input+"   ";
    tok_input.erase(0, tok_input.find_first_not_of(' '));



    for (unsigned i=0; i<tok_input.length()-1; ++i)
    {



        if (int( tok_input.at(i)<32))
        {
            continue;
        }


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


        /*




         if (isspace==false)
         {
             tempstr=tempstr+stringone;

         }
         else if (isspace)
         {
             if (tempstr!="")
             {
                 struct LexPositionNode pos;
                 pos.posstart=i;
                 pos.value=tempstr;
                 if (tempstr=="main")
                 {
                     pos.tokentype="program";
                 }

                 this->lexnode.push_back(pos);
             }
             tempstr="";
         }*/

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



