# Unit 2 

## Pointers (*)
- Declaration
  ```cpp
  int* ptr;
  ```
- Address of Operator (&)
  ```cpp
  int var = 10;
  court << &var; //prints out the address of var
  ```
- Initialization
  ```cpp
  int var = 10;
  int* ptr = &var;  //pointer to the address of var
  ```
- Dereferncing Pointers
  ```cpp
  int var = 10;
  int* ptr = &var;
  int value = *ptr;   //Dereferences the pointer to get the value of var
  ```

  
## Pointer & Reference Practice


## Dynamic Memory Practice
1. True/False: string* x = new string[m];
2. True/False: char* x = new string;
3. True/False: double** mat = new double*[m];
4. True/False: int** mat = new int[n][m];

### Answers
- True
- False
- True
