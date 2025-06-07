# Vector

# 🧮 Vector Library in C

This project is a small library for working with 2D vectors (`Vector`) in C.  
It provides basic vector operations such as addition, subtraction, comparison, length calculation, and printing.

## 📂 Project Structure

vector-project/
├── vectors.c
├── vectors.h
├── main.c 
├── Makefile
└── README.md 

## 🔧 Features

- Create 2D vectors
- Add and subtract vectors
- Compare vectors (`vectorEqual`)
- Calculate vector length (`vectorLen`)
- Print vectors (`vectorPrint`)

### 🔽 Clone the repository

```bash
git clone https://github.com/yourusername/vector-project.git
cd vector-project

## 🚀 How to Run
Compile using Makefile:

make

Alternatively, compile manually:

clang -o vector_test main.c vectors.c -lm

Run the program

./vector_test

Sample Output:

Vector a = (3, 4)
Vector b = (1, 2)
Sum: (4, 6)
Diff: (2, 2)
Length of a: 5
Are a and b equal? No