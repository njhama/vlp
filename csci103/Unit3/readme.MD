# Objects, Classes, Structs

## Structs (defaulted to public) 
```cpp
// struct definition
struct Person {
  string name;
  int age;  
  Person(std::string name, int age) : name(name), age(age) {}
}

// is the same as...

class Person {
  public:
    string name;
    int age;  
    Person(std::string name, int age) : name(name), age(age) {}
}
```
