# Programming Language Project - Lab 2

## Data Types and Naming Conventions in C

**1) What are the naming requirements for variables in your language?**
<br> Variable names must begin with either a letter or an underscore.
<br><br>1a. What about naming conventions? Are they enforced by the compiler/interpreter, or are they just standards in the community?
<br> There aren't any naming conventions enforced by the compiler. In the C community, the preference is to use underscores and all lower-case letters rather than camel case.

**2) Is your language statically or dynamically typed?**
<br> C is statically typed because you must declare explicitly declare a variable's data type 
<br>(Source - https://www.sitepoint.com/typing-versus-dynamic-typing/, https://developer.mozilla.org/en-US/docs/Glossary/Static_typing)

**3) Strongly typed or weakly typed?**
<br> C is weakly typed because you can convert data types. Also, it allows certain 'implicit' conversions such as when adding an int and float -- the int is 'implicitly' converted to a float. 
<br>From the textbook **The C Programming Language** by Kernighan and Ritchie, "C is not a strongly-typed language, but as it has evolved, its type-checking has been strengthened."

**4) If you put this line (or something similar) in a program and try to print x, what does it do? If it doesn't compile, why? Is there something you can do to make it compile? x = "5" + 6**
<br> It doesn't compile. It can compile if the string "5" is converted to type int. GeeksforGeeks recommends using the 'atoi()' function.
 ```c
 atoi("5) + 6
 ```

5) Describe the limitations (or lack thereof) of your programming language as they relate to the coding portion of the assignment (adding ints and floats, storing different types in lists, converting between data types). Are there other restrictions or pitfalls that the documentation mentions that you need to be aware of?
<br> The exercises in the coding portion showed that the implicit conversion capabilities are helpful -- ints and floats could be added without having to explicitly convert either value. However, some big adjustments for me are not having a built-in String class (and all the very helpful Python String methods...). I'll definitely have to practice working with character arrays. Other learnings that stood out are 1) There is not support/functionality for creating arrays with elements of different data types and 2) There is no built-in dictionary type. But, there were several user tutorials on how to create a similar structure! 

6) Are there built-in complex data types that are commonly used in your language? (hint: they’d probably appear fairly early in the documentation if so) 
<br> Answer