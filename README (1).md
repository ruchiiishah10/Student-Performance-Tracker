# Student Performance Tracker

## Project Overview
A menu-driven C++ program to manage basic student records.

## Features
- Add student records (roll number, name, marks)
- Display all records
- Search by roll number
- Find the student with the highest marks
- Sort students by marks in descending order
- Exit the program

## Data Structures and Algorithms
- `struct Student` stores each student's data.
- An array stores up to 100 student records.
- Linear search finds a student by roll number.
- Bubble sort sorts students by marks.

## How to Run
Compile with a C++ compiler such as `g++`:
```bash
g++ student_performance_tracker.cpp -o student_performance_tracker
```
Run on Windows:
```bash
student_performance_tracker.exe
```
Run on macOS/Linux:
```bash
./student_performance_tracker
```

## Limitations
- Records are kept in memory only and disappear when the program exits.
- Names are read as one word, so spaces are not supported.
- The program does not check duplicate roll numbers or validate the marks range.

## Project Team
- Ruchi Shah — Enrollment No. 12502120601103
- Niti Patel — Enrollment No. 12502120601082

**Department:** Artificial Intelligence and Data Science  
**Subject:** Data Structure
