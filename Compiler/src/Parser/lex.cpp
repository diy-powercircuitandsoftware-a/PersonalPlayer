#include "Lex.h"



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
    tok_input=tok_input+"   ";
    string tempstr="";

   std::cout<<tok_input+"\n\n\n\n";
    bool quote=false;
    bool comment=false;
    for (unsigned i=0; i<tok_input.length()-1; ++i)
    {

        char charone= tok_input.at(i);
        char nextcharone= tok_input.at(i+1);
        bool isspace=(charone==' ');
        bool isquote=(charone=='"');
        bool iscommentopen=(charone=='/')&&(nextcharone=='*');
        bool iscommentclose=(charone=='*')&&(nextcharone=='/');

        if (iscommentopen&&comment==false)
        {
            comment=true;
            continue;
        }
        if (iscommentclose&&comment)
        {
            comment=false;
            i++;
            continue;
        }
        if (comment)
        {
            continue;
        }

        if (isquote&&quote==false)
        {
            tempstr=tempstr+charone;
            quote=true;
            continue;
        }
        else if (isquote&&quote==true)
        {
            tempstr=tempstr+charone;


            quote=false;
            struct LexPositionNode pos;
            pos.posstart=i;
            pos.value=tempstr;
            pos.tokentype="string";
            this->lexnode.push_back(pos);

            tempstr="";
            continue;

        }
        if (quote==true)
        {
            tempstr=tempstr+charone;
            continue;
        }
        if (isspace==false)
        {
            tempstr=tempstr+charone;
        }
        else if (isspace)
        {
            if (tempstr!=""){
            struct LexPositionNode pos;
            pos.posstart=i;
            pos.value=tempstr;
            pos.tokentype="test";
            this->lexnode.push_back(pos);
            }
            tempstr="";
        }

    }

    for (int i = 0; i <  this->lexnode.size(); i++)
    {
        std::cout <<  this->lexnode.at(i).value << '\n';
    }

    return this->lexnode;
}

void Lex::Clear()
{
    this->lexnode.clear();
}
