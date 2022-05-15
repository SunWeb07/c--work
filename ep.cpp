//Program	on	Evalua2on	of	pos:ix	expression	
#include<iostream>	
#include<stack>	
#include<string>	
using	namespace	std;	
int	EvaluatePosbix(string	expression);	
int	PerformOperahon(char	operahon,int	operand1,int	operand2);	
bool	IsOperator(char	c);	
bool	IsNumericDigit(char	c);	
int	main()	
{	string	expression;	
    cout<<"Enter	Posbix	Expression\n";	
	getline(cin,expression);	
	int	result	=	EvaluatePosbix(expression);	
	cout<<"Output	=	"<<result<<"\n";	
}	
int	EvaluatePosbix(string	expression)	
{	stack<int>	S;	
	for(int	i=0;i<expression.length();i++)	
	{	
	if	(expression[i]	==	'	'||	expression[i]	==	',')
    continue;	
	else	if(IsOperator(expression[i]))	
	{	
	int	operand2=S.top();	
    S.pop();	
	int	operand1=S.top();	
	S.pop();	
  int	result	=	PerformOperahon(expression[i],operand1,operand2);						
S.push(result);	
	}	
														else	if(IsNumericDigit(expression[i]))		
																							{	
																											int	operand	=	0;	
																											while(i<expression.length()	&&	IsNumericDigit(expression[i]))	
																											{	
																													operand	=	(operand	*	10)	+	(expression[i]	-	'0');	
																													i++;	
																													}	
																														i--;	
																														S.push(operand);	
																					}	
																}	
																		return	S.top();	
}	
bool	IsNumericDigit(char	c)	
{	
						if(	c	>=	'0'	&&	c	<=	'9')	
						return	true;	
					return	false;	
}	
bool	IsOperator(char	c)	
{	
							if(c	==	'+'	||		c	==	'-'	||	c	==	'*'	||	c=='/')	
										return	true;	
							return	false;	
}	
int	PerformOperahon(char	operahon	,	int	operand1,int	operand2)	
	{	
						if(operahon	==	'+')	return	operand1	+	operand2;	
							else	if(operahon	==	'-')	return	operand1	-	operand2;	
							else	if(operahon	==	'*')	return	operand1	*	operand2;	
else	if(operahon	==	'/')	return	operand1	/	operand2;	
else	cout<<"Unexpected	Error\n";	
	return	-1;	
}			