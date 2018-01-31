1)
Напишете (рекурсивна) функция void count(int* arr, int size, int elem, type occurrences) , която в
променливата occurences запазва броя на срещанията на променливата elem в масива arr.
Забележка: може да използвате и друг прототип на функция по ваше усмотрение.

2) 
Напишете програма, която трансформира символен низ по следния
начин -> ако в низа се срещне символ, който е цифра, тогава този
символ бива заместен със символа на цифрата получена при разлика
на числото 9 със срещнатия символ. Създайте подходящи функции за
реализацията на програмата.
```
Пример:
Вход:
“​ My favorite numbers are 481 and 9361. Don't ask why.”
Изход:
“My favorite numbers are 518 and 0638. Don't ask why.”
```

3) 
Вие сте на безкрайна 2D координатна система. Когато се движите надясно, x се
увеличава, наляво x се намалява. При движение нагоре, y се увеличава, а надолу y
се намалява.
Дадена ви е моментната позиция: (current-x, current-y);
Също ви е даден символен низ от вида: 
```
">v<>>>v^~><><~><><"
```
където всеки символ
обозначава посока;
Целта ви е да минете през всяка посока и да кажете къде ще се намирате накрая,
след като сте почнали от началната ви точка.
Има един специален символ, обаче: символът ~;
Когато минете през този символ, трябва да обърнете посоките, т.е.:
- ако x се увеличава надясно и намаля наляво, тогава след минаване на този
символ x ще се увеличава наляво и намаля надясно;
- ако y се увеличава нагоре и намаля надолу, тогава след минаване на този
символ y ще се увеличава надолу и намаля нагоре;

Пример:
Starting point: (0, 0)
```
Input:
>>><<<~>>>~^^^
Output:
(-3, 3)
```

4) 
Да се напише рекурсивна функция, която извежда
на екрана следната “пирамида” при
зададено число N:
```
N
N N-1
N N-1 N-2
............
N ... ... ... ... ... 2 1
```