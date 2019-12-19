# UNDERSTANDING AND USING C POINTERS
## chapter 1 Introduction
### 1 Pointers and Memory
1. When a C program is compiled, it works with three types of memory, as is shown:
![](images/Xnip2019-12-19_11-13-23.png)

2. Declaring Pointers
    - There is nothing inherent to a pointer’s implementation that suggests what type ofdata it is referencing or whether its contents are valid.
    - While a pointer may be used without being initialized, it may not always work properlyuntil it has been initialized.

3. How to Read a Declaration
    - The trick is to read them backward.
    - Reading the declaration backward allows us to progressively understand the declaration, as is shown:
        ![](images/Xnip2019-12-19_12-26-00.png)

4. Address of Operator
    - When  working  with  complex  pointer  expressions,  draw  a  picture  ofthem, as we will do in many of our examples.Address of OperatorThe  address  of  operator,  &,  will  return  its  operand’s  address.
    - It is a good practice to initialize a pointer as soon as possible, as illustrated below:
        ```c
        int num;
        int *pi;
        pi = &num;
        ```

5. Displaying Pointer Values
    - The variable’s address can be determined by printing it out as follows:
        ```c
        int num = 0;
        int *pi = &num;

        printf("Address of num: %d  Value: %d\n", &num, num);
        printf("Address of pi: %d  Value: %d\n", &pi, pi);
        ```
    - The printf function has a couple of other field specifiers useful when displaying pointer values, as is summarized:
        ![](images/Xnip2019-12-19_12-53-39.png)

6. Dereferencing a Pointer Using the Indirection Operator



