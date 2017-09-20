# Quiz #10


1. What do pointers hold?
    a) values
    b) functions
    c) addresses

2. How do you declare a pointer that will hold an integer type?
    a) int *p
    b) int &p
    c) int p

3. What symbol in C must be used to recieve the address of a variable?
    a) &
    b) %
    c) *

4. What is the correct way to assign the pointer p to the address of x?
    a) *p=&x
    b) p=%x
    c) p=&x

5. When using pointers in a function what must be sent to the function?
    a) variable
    b) value
    c) address of variable

6. True or false, a pointer int *p is declared, it is able to hold addresses of double type values as well.
    a) true
    b) false





7. 
#include <iostream>
using namespace std; 
int main()
{
      int var;  /*Suppose address of var is 2000 */

     int *ptr = &var;
     *ptr = 5;
    cout << var << *ptr;
             
 return 0;
}

8.
void f(int* p, int m)
{
    m = m + 5;
    *p = *p + m;
    return;
}
void main()
{
    int i=5, j=10;
    f(&i, j);
    printf("%d", i+j);
}

9.
What is the return value of f(p, p) if the value of p is initialized to 5 before the call? Note that the first parameter is passed by reference, whereas the second parameter is passed by value.
int f(int &x, int c) {
   c  = c - 1;
   if (c == 0) return 1;
   x = x + 1;
   return f(x, c) * x;
} 


A
3024
B
6561
C
55440
D
161051

10.
Which of the following is FALSE about references in C++
A
References cannot be NULL
B
A reference must be initialized when declared
C
Once a reference is created, it cannot be later made to reference another object; it cannot be reset.
D
References cannot refer to constant value

11.

Output of following C++ program?
#include<iostream>
using namespace std;
 
int main()
{
  int x = 10;
  int& ref = x;
  ref = 20;
  cout << "x = " << x << endl ;
  x = 30;
  cout << "ref = " << ref << endl;
  return 0;
}
Run on IDE
A
x = 20
ref = 30
B
x = 20
ref = 20
C
x = 10
ref = 30
D
x = 30
ref = 30

12.
void fun(int *p) 
{ 
  int q = 10; 
  p = &q; 
}     
   
int main() 
{ 
  int r = 20; 
  int *p = &r; 
  fun(p); 
  printf("%d", *p); 
  return 0; 
}


