# Monty Interpreter

## Project Description

This project implements a simple interpreter for Monty bytecode files. Monty is a programming language that uses a stack data structure.

## Table of Contents

- Description
- Getting Started
- Usage
- Supported Opcodes
- File Descriptions
- Authors
- License

## Getting Started

To get a copy of the project up and running on your local machine, follow these steps:

1. Clone the repository:
[Monty Interpreter](https://github.com/thisislaait/monty)


2. Change to the project directory: cd monty


3. Compile the source code: gcc -Wall -Werror -Wextra -pedantic *.c -o monty


## Usage

Run Monty with a Monty bytecode file:
./monty path/to/your/file.m


## Supported Opcodes

- `push <int>`: Pushes an element to the stack.
- `pall`: Prints all values on the stack.
- `pint`: Prints the value at the top of the stack.
- `pop`: Removes the top element of the stack.
- `swap`: Swaps the top two elements of the stack.
- `add`: Adds the top two elements of the stack.
- `nop`: Does nothing.

## File Descriptions

- `monty.h`: Header file containing function prototypes, structs, and global variables.
- `monty.c`: Main file for the Monty interpreter.
- `opcode_functions.c`: Implementation of opcode functions.
- `custom_functions.c`: Implementation of custom standard library functions.

## Authors

- [Thisislaait][https://github.com/your-username/monty]
- Izzymarc

## License

This project is licensed under the MIT License - see the LICENSE file for details.
