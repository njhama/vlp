# Spring 2023 - Midterm 2 Explanations
 
1. Dynamic Memory True/False (2 pts)
  In order to do this type of question you need to ensure
  1) Types are compatible on both sides of =
  2) Same Pointer Levels on both sides of =

### Explanations
1.1.True: string* x = new string[m];
- Left Side:
  - Pointer Lvl: 1, Just a pointer to the String
  - Type: String*
- Right Side
  - Pointer Lvl: 1, allocates an array and returns a pointer to the first element in the list
  - Type: String*, since right side returns a string*
- Conclusion
  - True since ptr lvls are the same and type are compatible!
      
 1.2.False: char* x = new string;
- Left Side:
  - Pointer Lvl: 1, Just a pointer to the char
  - Type: Char*
- Right Side
  - Pointer Lvl: 1, just a pointer to a string
  - Type: String*, since right side returns a string*
- Conclusion
  - False, although lvls are the same, types are not compatible

 1.3.True: double** mat = new double*[m];
 - Left Side:
  - Pointer Lvl: 2, A pointer to a pointer of a double
  - Type: Double**
- Right Side
  - Pointer Lvl: 2
  - Type: Double**
- Conclusion
  - True
