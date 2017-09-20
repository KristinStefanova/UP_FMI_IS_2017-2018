# Quiz #10

**1. Какво съдържат(съхраняват) указателите?**

А. Стойности

В. Функции

С. Адреси

D. Променливи


**2. Как ще декларирате указател, който ще сочи към цяло число?**    

A. int #p;

B. int &p;

C. int p;

D. int \*p;


**3. Кой символ в C++ трябва да се използва за получаване на адрес на променлива?**

A. &

B. #

C. %

D. \*


**4. Какъв е правилният начин за присвояване адреса на x на указателя р(инициализиране на р)?**

А. \*p = &x

B. p = %x

C. #p = &x

D. p=&x


**5. Когато използвате указатели в дадена функция(подаване по адрес), какво трябва да бъде подадено на функцията при извикването й?**

А. Променлива

B. Стойност

C. Адрес на променлива

D. Псевдоним на променлива


**6. Вярно или не, указателят int \*p е деклариран, той е в състояние да съхранява адресите на стойности от тип double, също?**

A. Вярно

В. Не е вярно


**7. Какъв ще е резултата от следната програма?**
```c++
#include <iostream>
using namespace std; 

int main()
{
    int var;  /* Приемете, че адреса на var е 2000 */
    int *ptr = &var;
    *ptr = 5;
    cout << var << " " << *ptr;
             
 return 0;
}
```

**8. Какъв ще е резултата от следната програма?**
```c++
#include <iostream>
using namespace std; 

void fоо(int* p, int m)
{
    m = m + 5;
    *p = *p + m;
    return;
}

int main()
{
    int i=5, j=10;
    foo(&i, j);
    cout << i+j;
    
    return 0;
}
```

**8. Каквo връща foo(p, p), ако стойността на p е инициализирана с 5 преди извикването? Обърнете внимание, че първият параметър се предава по референция, докато вторият параметър се предава по стойност.**
```c++
int foo(int &x, int c) {
   c  = c - 1;
   if (c == 0) return 1;
   x = x + 1;
   return c * x;
} 
```

A. 
B. 
C. 
D. 

**10. Кое от следните *НЕ* е вярно за референции в C++:**
A. Референциите не могат да бъдат NULL
B. При деклариране трябва да се инициализира
C. 
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

