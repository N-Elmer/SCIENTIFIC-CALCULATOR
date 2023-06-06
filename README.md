# SCIENTIFIC-CALCULATOR
CALCULATOR WITH 🧪🧮 SCIENTIFIC FUNCTIONS

## Folder Structure

📂 scientific-calculator
   
   |
   
   ├── 📄 README.md
   
   ├── src
   
       ├── 📄 main.cpp

       ├── 📄 Calculator.h

       └── 📄 Calculator.cpp
       
   └── 📄 .gitignore
   
The project folder structure consists of the following files:

- 📄 README.md: This file contains the documentation and information about the scientific calculator project, including how to use it and any additional details.

- 📄 main.cpp: This file is the entry point of the program, where an instance of the `Calculator` class is created and its `run()` function is called.

- 📄 Calculator.h: This file contains the declaration of the `Calculator` class and its member functions.

- 📄 Calculator.cpp: This file contains the definition of the `Calculator` class member functions.

## Usage

To use the scientific calculator, follow these steps:

1. Clone or download this project repository.

2. Compile the source code files `main.cpp` and `Calculator.cpp` using a C++ compiler.

3. Run the compiled executable.

4. Enter the operation you want to perform:

   - `+` for addition
   - `-` for subtraction
   - `*` for multiplication
   - `/` for division
   - `s` for square root
   - `p` for exponentiation

5. Follow the prompts to enter the required numbers or values for the selected operation.

6. The calculator will display the result of the operation.

7. Repeat the process to perform additional calculations.

## Code Explanation

The scientific calculator is implemented using a class called `Calculator`. The class encapsulates the calculator functionality, including the different arithmetic operations and other mathematical functions.

The `Calculator` class has member functions for each operation, such as `performAddition()`, `performSubtraction()`, `performMultiplication()`, `performDivision()`, `performSquareRoot()`, and `performExponentiation()`. These functions handle user input and perform the corresponding calculations.

The `run()` function serves as the entry point for the calculator. It prompts the user for the desired operation and calls the appropriate member function based on the input.

The main program in `main.cpp` creates an instance of the `Calculator` class and invokes its `run()` function to start the calculator.

## Troubleshooting

If you encounter any issues or errors while using the scientific calculator, consider the following:

- Double-check that the source code files `main.cpp`, `Calculator.h`, and `Calculator.cpp` are present and correctly placed in the same directory.

- Ensure that you have a C++ compiler installed on your system and that it supports the C++ version used in the project.

- Verify that you are entering valid inputs for the calculator operations and following the prompts correctly.

If the problem persists, feel free to open an issue in the GitHub repository for further assistance.

---

This README file provides an overview of the scientific calculator project, its folder structure, usage instructions, code explanation, and troubleshooting tips. Use it as a guide to understand and utilize the scientific calculator.
