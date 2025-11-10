# Stack-in-C-DSA-with-C-
Stack Program(PUSH, POP).
Stack: Stack is a list of elements may be inserted or deleted item at one end called Top of the stack. Stack work on two principle i.e. LIFO(Last In First Out) or FILO(First In Last Out).
Operation on Stack:

Push Operation: The insertion operation of elements into stack is called PUSH operation.
Algorithm-
            PUSH(Stack[MAXSIZE], Item)
Let, Stack[MAXSIZE] is an array for implementing stack and set top=-1.

1. [Check for stack and set overflow?]
         If top= MAXSIZE-1 then
         print "Overflow" and EXIT.
2. Else
        top=top+1
3. Stack[top]= item {Insert Item into Stack]
4. Exit.

POP operation: The deletion of elements from stack is called POP operation,

Algorithm-
1. [Check for water flow]
   If
     top <0 then
   print "underflow"
   and Go to step 4

   Else
       [Delete the item from stack]
       item<-------- Stack[top]


2.[Decrement the top pointer]
            top=top-1
3. Return the deleted item from the stack
    [Finished]

4. Exit.
   
