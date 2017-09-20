# Quiz #9

**1. Кое от следните е правилното деклариране на указател?**

A. int x;

B. int &x;

C. ptr x;

D. int \*x;

**2. Кое от следните дава адреса в паметта на цялото число **a** ?**

A. \*a;

B. a;

C. &a;

D. address(a);

**3. Кое от следните дава адреса в паметта на променлива, сочена от указателя **a** ?**

A. a;

B. \*a;

C. &a;

D. address(a);

**4. Кое от следните дава стойността на променлива, съхранена на адрес, посочен от указателя **a** ?**

A. a;

B. val(a);

C. \*a;

D. &a;

**5. В оператора по-долу ptr1 и ptr2 са неинициализирани указатели към int. Вярно ли е това твърдение?**
```c++
int* ptr1, ptr2;
```

A. Да

B. Не

**6. Какъв е резултатът от следващата програма?**

```c++
#include <iostream>
using namespace std;

void foo(int *ptr)
{
    *ptr = 30;
}
 
int main()
{
  int y = 20;
  foo(&y);
  cout << y;
 
  return 0;
}
```

**7. Какъв е резултатът от следващата програма?**

```c++
#include <iostream>
using namespace std; 

int main()
{
    int *ptr;
    int x;
 
    ptr = &x;
    *ptr = 0;
 
    cout << x << endl;
    cout << *ptr << endl;
 
    *ptr += 5;
    cout << x << endl;
    cout << *ptr << endl;
 
    (*ptr)++;
    cout << x << endl;
    cout << *ptr;
 
    return 0;
}
```

**8. Причмете че, за компилаторa int заема 4 байта, char заема 1 байт и указател заема 4 байта. Какъв е резултатът от следващата програма?**

```c++
#include <iostream>
using namespace std;

int main()
{
    int arri[] = {1, 2 ,3};
    int *ptri = arri;
 
    char arrc[] = {'1', '2', '3'};
    char *ptrc = arrc;
 
    cout << sizeof(arri)) << endl;
    cout << sizeof(ptri)) << endl;
 
    cout << sizeof(arrc)) << endl;
    cout << sizeof(ptrc));
 
    return 0;
}
```

**9. Да приемем, че float заема 4 байта, да се предскаже изхода на следната програма:**

```c++
#include <iostream>
using namespace std; 

int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
 
    cout << *ptr2 << endl;
    cout << ptr2 - ptr1;
 
   return 0;
}
```

**10. Какъв е резултатът от следващата програма?**

```c++
#include <iostream>
using namespace std;

void foo(int *p, int *q) 
{ 
   p = q; 
  *p = 2; 
}

int i = 0, j = 1; 

int main() 
{ 
  foo(&i, &j); 
  cout << i << " " << j; 
  
  return 0; 
}
```

**11. Какъв е резултатът от следващата програма?**

```c++
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    ++*p;
    p += 2;
    cout << *p;
    
    return 0;
}
```

**12. Какъв е резултатът от следващата програма?**

```c++
#include <iostream>
using namespace std;

void foo(int x)
{
    x = 30;
}
 
int main()
{
    int y = 20;
    foo(y);
    cout << y;
    
    return 0;
}
```
