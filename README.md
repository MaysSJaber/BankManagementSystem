Bank Management System — C++ Console Application
A complete console-based banking system developed in C++ as a practical application of Object-Oriented Programming and file handling.
The goal of this project was to simulate a real banking workflow: managing clients and employees, securing access through permissions, processing financial transactions, recording system activity, and handling currency exchange operations.
Client Management
The system allows bank employees to manage client records through a complete set of operations:
Add new clients with personal and account information.
Search for clients using their account number.
Update existing client data.
Delete client records.
Display a complete list of all clients.
View total balances across all client accounts.
All client information is saved in text files, allowing the data to remain available after closing and reopening the application.
Financial Transactions
A dedicated transactions section allows users to perform core banking operations:
Deposit money into a client account.
Withdraw money after validating the available balance.
Transfer money between two client accounts.
Update account balances automatically after every operation.
Store every transfer in a transfer log, including sender, receiver, amount, balances before/after the transfer, date, time, and the user who performed it.
Display the transfer history for auditing and tracking purposes.
User Management and Permissions
The project includes a user-management system that controls who can access each feature.
Add, update, delete, find, and list users.
Authenticate users through a login screen.
Assign permissions to determine which system features each user can access.
Prevent unauthorized users from opening restricted screens.
Record login activity in a login register, including date, time, username, and password information.
This module demonstrates how user roles and permissions can be implemented in a system that handles sensitive information.
Currency Exchange Module
The system also includes a complete currency exchange section:
List all supported currencies.
Search for a currency by country name, currency code, or code-related data.
Update currency exchange rates.
Convert an amount from one currency to another through a currency calculator.
Calculate conversions through a base currency to maintain accurate exchange calculations.
Technical Implementation
The project was built with a modular architecture, where each responsibility is separated into its own class. For example:
clsBankClient handles client data and banking operations.
clsUser handles users, authentication, and permissions.
clsCurrency handles currency data and exchange calculations.
Dedicated screen classes provide the user interface for each operation.
Utility, validation, string, and date classes support reusable operations across the application.
Global data is used to maintain the active logged-in user and application state.
Concepts Applied
C++
Object-Oriented Programming (OOP)
Classes and Objects
Inheritance and Encapsulation
Static Members and Methods
File Handling and Data Persistence
Vectors
Input Validation and Error Handling
Authentication and Authorization
Role-Based Access Control
Transaction Logging
Modular Code Design
What I Learned
Building this project improved my ability to break down a large application into smaller components, design reusable classes, work with file-based data storage, validate user input, and implement practical business logic.
It was challenging, especially because it combines multiple modules in one system, but completing it gave me much stronger confidence in applying C++ and OOP to real-world-style projects.
