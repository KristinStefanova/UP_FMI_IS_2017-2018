# Quiz #12

1. To recurse is to

Practice recursion
Swear again
Neither of the above

2. To recur is to

Practice recursion
Swear again
Neither of the above

3. Factorial is

a good introductory example of recursion, but a function better implemented iteratively for efficiency reasons.
a good introductory example of recursion, and a function best implemented recursively.
a bad introductory example of recursion as it hard to implement recursively.

4. factorial(0) is

0
1
Infinity
Undefined
None of the above

5. Recursion is

a powerful construct theoretically, but rarely used in actual programs.
a weak construct theoretically rarely used in actual programs.
a powerful construct theoretically, often used in certain applications that benefit from recursive methods.

6. Which of the following is not a requirement for a recursive function?

It has two base cases.
It has a recursive case
Its recursive case approaches a base case.

7. The function

int example(unsigned int a)
{
if (a==0) return 0;
else return example(a+1);
}

is a bad recursive function because

it has no recursive case.
it has no base case.
the recursive case does not approach the base case.

8. Is the following function circular?

int syracuse(int n)
{
if (n==1) return 0;
else if (n % 2 != 0) return syracuse(n/2);
else return 1 + syracuse(3*n + 1);
}

Yes
No
We don't know.


9. True or false: Regardless of implementation, the closed-form solution to the Fibonacci problem is always more efficient than a recursive implementation.

True
False

10. True or false: A linearly recursive function always has the recursive call at the end of the function.

True
False

11. True or false: Tail recursion is a form of linear recursion.

True
False

12. The following function is an example of what form of recursion?

int mystery(int n, int k)
{
if (k == 0 || n == k) return(1);
else return(mystery(n-1,k) + mystery(n-1,k-1));
}

Linear recursion
Binary recursion
Nested recursion
Mutual recursion

13. The following function implements what recursive function?

int mystery(char *s)
{
if (*s=='\0') return 0;
else return(1 + mystery(s+1));
}

strlen()
strcmp()
strstr()
strchr()


14. True or False: All recursive functions can be implemented iteratively.

True
False

15. True or False: All iterative functions can be implemented recursively.

True
False

16. Predict output of following program
#include <stdio.h>
 
int fun(int n)
{
    if (n == 4)
       return n;
    else return 2*fun(n+1);
}
 
 
int main()
{
   printf("%d ", fun(2));
   return 0;
}

A. 4
B. 8
C. 16
D. Runtime Error

17. Consider the following recursive function fun(x, y). What is the value of fun(4, 3)
int fun(int x, int y) 
{
  if (x == 0)
    return y;
  return fun(x - 1,  x + y);
} 

A. 13
B. 12
C. 9
D. 10

18. What does the following function print for n = 25?
void fun(int n)
{
  if (n == 0)
    return;
 
  printf("%d", n%2);
  fun(n/2);
}  

A. 11001
B. 10011
C. 11111
D. 00000

19. True or False: Infinite recursion can occur when a recursive algorithm contains a base case.

True
False

20. Consider the following recursive C function that takes two arguments

unsigned int foo(unsigned int n, unsigned int r) {
  if (n  > 0) return (n%r +  foo (n/r, r ));
  else return 0;
}

What is the return value of the function foo when it is called as foo(345, 10) ?

A. 345
B. 12
C. 5
D. 3
