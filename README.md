# Chai-Tapri-Accounting-System-

Overview

The Chai Tapri Accounting System is a simple C++ console program that helps manage the daily sales and profit of one or more tea stalls (tapris).
It allows the user to store daily sales records, calculate profit, generate reports, and compare the performance of different tapris.

This project demonstrates basic concepts of Object-Oriented Programming (OOP) and data management using vectors in C++.

Features

Add new tapris (tea stalls)

Record daily sales information

Automatically calculate daily profit or loss

Generate reports for each tapri

Compare profits between multiple tapris

Menu-driven console interface

Technologies Used

Language: C++

Libraries Used:

<iostream> – for input and output

<vector> – for storing multiple records dynamically

Program Structure
1. Structure: DayRecord

Stores the daily data of a tapri.

Fields:

date – date of the record

cups – number of tea cups sold

price – price per cup

expense – total daily expenses

profit – calculated profit or loss

2. Class: Tapri

Represents a single tea stall.

Functions:

getName() – returns the tapri name

getTotalProfit() – calculates total profit

addRecord() – adds a daily sales record

showReport() – displays summary of the tapri

Each tapri stores its records using a vector of DayRecord.

3. Function: compareTapris()

This function compares the total profit of all tapris and identifies the best performing tapri.

4. Main Program

The program uses a menu-driven system with the following options:

Add Tapri

Add Daily Record

Show Report

Compare Tapris

Exit

The menu runs inside a while loop until the user chooses to exit.

Profit Calculation

Profit is calculated using the formula:

Income = Cups Sold × Price Per Cup
Profit = Income − Expense
Example Workflow

User adds a tapri named RahulTea.

User records daily sales:

Cups Sold: 100

Price: ₹10

Expense: ₹600

Program calculates:

Income = ₹1000

Profit = ₹400

Reports and comparisons can be generated.

Learning Outcomes

This project demonstrates:

Use of structures and classes

Vectors for dynamic storage

Menu-driven program design

Basic object-oriented programming concepts

Simple profit calculation logic

Limitations

Data is not saved permanently (no file storage).

Input validation is minimal.

Console-based interface only.

Future Improvements

File saving using file handling

Graphical user interface (GUI)

Inventory management

Detailed daily reports

Error handling and validation
