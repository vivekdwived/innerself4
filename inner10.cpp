	//10. Write a C++ program to generate nth Fibonacci term using recursion.
#include<iostream>
using namespace std;

/*
1.Fn=Fn-1+Fn-2..........is called Fibonacci sequence
2.F0=0,F1=1,series=0,1,1,2,3,5,8........
3.get n=nth term to be found
4.if n=0,F=0,if n=1 F=1,then Fn=Fn-1+Fn-2.......
5.write a function Fi= previous1 + previous 2;..call function inside the function..
6.as i>n terminate the function print its value in MAIN()..
*/

int fib(int n,int i=0,int j=1)
{	
	if(n)
	return fib(n-1;j;i+j)
	else
	return j;
}
	if (n==0)return 0;
	else if (n=1) return 1;
	else(i<=n) {  
			(i)=(i-1)+(i-2);
			i++;
			return fib(n,i);
			
			}
      
return (i);
}	






//DRIVER FUNCTION
int main();
{
	int n;
	cout<<"enter the term which you want :";
	cin>>n;
	
	int i=2
	fib(n,i);
return 0;
}
	
