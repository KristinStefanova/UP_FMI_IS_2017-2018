# Quiz #2
**0. Кое не е цикъл?**

A. for

B. have

C. do

D. while

**1. Кой for цикъл няма да работи?**

A. for (i=0; i<5; i++)

B. for (i=5; i<=10; i++)

C. for (i=5; i=10; i++)

**2. Кой е правилният синтаксис?**

A. do {//code}while (condition);

B. do {//code}while (condition)

C. do {//code}while (condition):

**3. Кога ще се изпълни следния цикъл: while(x < 100)?**

A. Когато х е по-малко от сто

B. Когато х е по-голямо от сто

C. Когато х е равно на сто

D. Докогато си иска

**4. Какво ще изведе следната програма?**
```c++
    #include <iostream>
    using namespace std;
    int main ()
    {
        int array[] = {0, 2, 4, 6, 7, 5, 3};
        int n, result = 0;
        for (n = 0; n < 7; n++) {
            result *= array[n];
        }
        cout << result;
        return 0;
    }
```
**5. Какво ще изведе следната програма?**
```c++
    #include <iostream>
    using namespace std;
    int main()
    {
        char str[5] = "ABC";
        cout << str;
        cout << str[3];
        cout << str;
    
        return 0;
    }
```
**6. Имате следното:**
```c++
int items[][5] = { {0, 1, 3, 4},
    		   {4, 3, 99, 0, 7 },
   		   {3, 2} 
		 };
```
**Заместете 99 с 66?**

**7. Имате следното:**
```c++
double things[][4] = { {1.2, 9.0},
    		       {9.2, 0.5, 0.0},
    		       {7.3, 7.9, 1.2, 3.9} 
		     };
```
**Каква е стойността на things[0][3]?**