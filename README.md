# Project; 0x19. C - Stacks, Queues - LIFO, FIFO

# Project Overview
This project, titled "0x19. C - Stacks, Queues - LIFO, FIFO," involves the implementation of a Monty interpreter. The Monty language is a scripting language that is compiled into Monty bytecode files. The interpreter processes these bytecode files and executes the specified operations using a stack and queue data structure.

## Technologies
- C Programming Language
- Monty ByteCode

## Requirements

### General

- **Allowed editors:** vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using `gcc` with specific options: `-Wall -Werror -Wextra -pedantic -std=c89`
- All files should end with a new line.
- A `README.md` file at the root of the project folder is mandatory.
- Code should follow the Betty style, checked using `betty-style.pl` and `betty-doc.pl`.
- A maximum of one global variable is allowed.
- No more than 5 functions per file.
- Usage of the C standard library is allowed.
- Prototypes of all functions should be included in the `monty.h` header file.
- Don't forget to push the header file.
- All header files should be include guarded.



## Data Structures
The project utilizes two data structures:

### 1. `stack_t` Structure

```c
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
```

### 2. `instruction_t` Structure
```c
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```

## Compilation & Output
Code is compiled using the following command:

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

Output is printed on `stdout`, and error messages are printed on `stderr`.

## Tests
Collaborative work on a set of tests is strongly encouraged.

## The Monty Language
Monty 0.98 is a scripting language compiled into Monty bytecode files. The interpreter processes these bytecode files, executing specified operations using a stack and queue.

### Monty Byte Code Files
- Files have the `.m` extension.
- One instruction per line.
- Any number of spaces before or after the opcode and its argument.

Example:
```bash
$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
```

### The Monty Program
Usage: `monty file`

- If no file or more than one argument is given, print `USAGE: monty file` and exit with `EXIT_FAILURE`.
- If the file can't be opened, print `Error: Can't open file <file>` and exit with `EXIT_FAILURE`.
- If an invalid instruction is encountered, print `L<line_number>: unknown instruction <opcode>` and exit with `EXIT_FAILURE`.
- If `malloc` fails, print `Error: malloc failed` and exit with `EXIT_FAILURE`.


### Testing
We strongly encourage collaborative testing to ensure the correct functionality of the interpreter. 

## Task Progress
- [x] Task 0: push, pall
- [x] Task 1: pint
- [x] Task 2: pop
- [x] Task 3: swap
- [x] Task 4: add
- [x] Task 5: nop
- [x] Task 6: sub
- [x] Task 7: div
- [x] Task 8: mul
- [x] Task 9: mod
- [x] Task 10: comments
- [x] Task 11: pchar
- [x] Task 12: pstr
- [x] Task 13: rotl
- [x] Task 14: rotr
- [x] Task 15: stack, queue
- [x] Task 16: Brainf*ck
- [x] Task 17: Add two digits
- [x] Task 18: Multiplication
- [x] Task 19: Multiplication level up


# Tasks @Monty 
The project involves the implementation of various opcodes for stack manipulation. Below is a summary of the tasks:

| Task Number | File Name       | Description                                                      | Prototype                                          |
|-------------|-----------------|------------------------------------------------------------------|----------------------------------------------------|
| 0           | `00-push_pall.c` | Implement the `push` and `pall` opcodes.                        | `void push(stack_t **stack, unsigned int line_number)`<br>`void pall(stack_t **stack, unsigned int line_number)` |
| 1           | `01-pint.c`      | Implement the `pint` opcode.                                     | `void pint(stack_t **stack, unsigned int line_number)`|
| 2           | `02-pop.c`       | Implement the `pop` opcode.                                      | `void pop(stack_t **stack, unsigned int line_number)` |
| 3           | `03-swap.c`      | Implement the `swap` opcode.                                     | `void swap(stack_t **stack, unsigned int line_number)`|
| 4           | `04-add.c`       | Implement the `add` opcode.                                      | `void add(stack_t **stack, unsigned int line_number)` |
| 5           | `05-nop.c`       | Implement the `nop` opcode.                                      | `void nop(stack_t **stack, unsigned int line_number)` |
| 6           | `06-sub.c`       | Implement the `sub` opcode.                                      | `void sub(stack_t **stack, unsigned int line_number)` |
| 7           | `07-div.c`       | Implement the `div` opcode.                                      | `void div(stack_t **stack, unsigned int line_number)` |
| 8           | `08-mul.c`       | Implement the `mul` opcode.                                      | `void mul(stack_t **stack, unsigned int line_number)` |
| 9           | `09-mod.c`       | Implement the `mod` opcode.                                      | `void mod(stack_t **stack, unsigned int line_number)` |
| 10          | `10-nop.c`  	 | Implement the nop in the Monty language.                         | `void nop(stack_t **stack, unsigned int line_number)` |
| 11          | `11-pchar.c`     | Implement the `pchar` opcode.                                    | `void pchar(stack_t **stack, unsigned int line_number)` |
| 12          | `12-pstr.c`      | Implement the `pstr` opcode.                                     | `void pstr(stack_t **stack, unsigned int line_number)`  |
| 13          | `13-rotl.c`      | Implement the `rotl` opcode.                                     | `void rotl(stack_t **stack, unsigned int line_number)` |
| 14          | `14-rotr.c`      | Implement the `rotr` opcode.                                     | `void rotr(stack_t **stack, unsigned int line_number)` |
| 15          | `15-stack_queue.c` | Implement the `stack` and `queue` opcodes.                     | `void stack(stack_t **stack, unsigned int line_number)` |
| 16          | `1000-school.bf` | Brainf*ck script that prints "School" followed by a new line.   | |
| 17          | `1001-add.bf`    | Brainf*ck script that adds two digits given by the user.        | |
| 18          | `1002-mul.bf`    | Brainf*ck script that multiplies two digits given by the user.  | |
| 19          | `1003-mul.bf`    | Brainf*ck script that multiplies two digits and prints the result followed by a new line. | |


# Tasks # bf / # bytecodes 
| Task Number | File Name            | Description                                                                                                    |
|-------------|----------------------|----------------------------------------------------------------------------------------------------------------|
| 0           | [push, pall](./bytecodes/00.m) | Implement the push and pall opcodes.                                                                          |
| 1           | [pint](./bytecodes/06.m)      | Implement the pint opcode.                                                                                   |
| 2           | [pop](./bytecodes/07.m)       | Implement the pop opcode.                                                                                    |
| 3           | [swap](./bytecodes/09.m)      | Implement the swap opcode.                                                                                   |
| 4           | [add](./bytecodes/12.m)       | Implement the add opcode.                                                                                    |
| 5           | [nop](./bytecodes/14.m)       | Implement the nop opcode.                                                                                    |
| 6           | [sub](./bytecodes/19.m)       | Implement the sub opcode.                                                                                    |
| 7           | [div](./bytecodes/21.m)       | Implement the div opcode.                                                                                    |
| 8           | [mul](./bytecodes/24.m)       | Implement the mul opcode.                                                                                    |
| 9           | [mod](./bytecodes/27.m)       | Implement the mod opcode.                                                                                    |
| 10          | [comments](./bytecodes/30.m)  | Implement commenting capability.                                                                            |
| 11          | [pchar](./bytecodes/33.m)     | Implement the pchar opcode.                                                                                 |
| 12          | [pstr](./bytecodes/36.m)      | Implement the pstr opcode.                                                                                  |
| 13          | [rotl](./bytecodes/39.m)      | Implement the rotl opcode.                                                                                  |
| 14          | [rotr](./bytecodes/42.m)      | Implement the rotr opcode.                                                                                  |
| 15          | [stack, queue](./bytecodes/45.m) | Implement the stack and queue opcodes.                                                                    |
| 16          | [Brainf*ck](./bf/1000-school.bf) | Write a Brainf*ck script that prints School.                                                             |
| 17          | [Add two digits](./bf/1001-add.bf) | Add two digits given by the user using Brainf*ck.                                                   |
| 18          | [Multiplication](./bf/1002-mul.bf) | Multiply two digits given by the user using Brainf*ck.                                              |
| 19          | [Multiplication level up](./bf/1003-mul.bf) | Multiply two digits and print the result using Brainf*ck.                                        |
## Author :black_nib:

* **Ifeanyi I Ekezie** <[iiekezie](https://github.com/iiekezie)>
