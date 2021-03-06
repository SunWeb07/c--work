// Program to Convert Infix to Postfix expression
#include<iostream>
#include<stack>
using namespace std;
int precedence(char c)
{
    if (c== '^')
    return 3;
    else if (c=='*' || c == '/')
    return 2;
    else if(c == '+' || c=='-')
     return 1;
     else 
     return -1;
}
bool isOperator(char c)
{
    if(c=='+' || c=='-'|| c=='*'|| c=='/'|| c=='^')
    { 
          return true;
     }
     else
     {
           return false;
      }
} 
string InfixToPostfix(stack<char> s, string infix)
{      string postfix;
      for(int i=0;i<infix.length();i++)
       {
            if   (isalpha(infix[i]) || isdigit(infix[i]))
             {
                      postfix+=infix[i];
               }
             else if(infix[i] == '(')
               {
                       s.push(infix[i]);       
                }
              else if(infix[i] == ')')
              {
                    while((s.top()!='(') && (!s.empty())) 
                     {
                           char temp=s.top();
                           postfix+=temp;
                           s.pop();
                      } 
               }
             else if(isOperator(infix[i]))
  {
        if(s.empty())
        {
                s.push(infix[i]);
         }
         else
          {
              if(precedence(infix[i])>precedence(s.top()))
               {
                       s.push(infix[i]);
                } 
               else if((precedence(infix[i])==precedence(s.top())) &&(infix[i]=='^'))
           {
                   s.push(infix[i]);
            }
         else
         {
             while((!s.empty())&&(precedence(infix[i])<=precedence(s.top())))
               {
                    // Char temp=s.top();
                     postfix+=s.top();
                     s.pop();
                }
               s.push(infix[i]);
        }
      }
   }
}
 
    while(!s.empty())
    {
            postfix+=s.top();
            s.pop();
   }
       return postfix;
}

int main()
{
      string infix,postfix;
       cout<<"Enter a Infix Expression:"<<endl;
        cin>>infix;
        stack <char> s;
         cout<<"INFIX EXPRESSION: "<<infix<<endl;
         postfix = InfixToPostfix(s,infix);
         cout<<endl<<"POSTFIX EXPRESSION: "<<postfix;
         return 0;
}