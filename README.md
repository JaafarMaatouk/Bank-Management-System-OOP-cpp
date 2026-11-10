# 🏦 Bank Management System (C++ OOP)

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)
![OOP](https://img.shields.io/badge/Paradigm-OOP-success.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)

A comprehensive, highly modular, console-based Bank Management System built entirely using Object-Oriented Programming (OOP) principles in C++. This project demonstrates a deep understanding of software architecture by utilizing over 40 classes to separate business logic, data access, and user interface (UI).

## 🎯 Project Overview
This system is designed to simulate real-world banking operations. It handles complex relationships between entities (People, Clients, Users), manages currency exchanges, and ensures data persistence using text files. The architecture strictly adheres to **Separation of Concerns**, ensuring that UI screens do not directly manipulate files.

## ✨ Key Features
- **🔐 Secure Authentication:** A robust login system with different user roles and permissions.
- **👥 Client Management:** Full CRUD operations (Create, Read, Update, Delete) for bank clients.
- **💸 Transaction Management:** Secure deposits, normal withdrawals, and quick withdrawals with balance validation.
- **💱 Currency Exchange:** Manage multiple currencies, update exchange rates, and perform currency calculations.
- **🛡️ User & Permissions Management:** Admin can manage system users and assign specific permissions (e.g., access to currency exchange, client lists, etc.).
- **💾 Data Persistence:** Utilizes text files to save and load complex data structures, ensuring data is not lost between sessions.

## 🏗️ Architecture & Technical Highlights
- **True Object-Oriented Design:** Heavy use of **Encapsulation**, **Inheritance** (e.g., `clsPerson` -> `clsUser`, `clsPerson` -> `clsClient`), and **Polymorphism**.
- **40+ Classes:** The project is divided into logical layers to prevent spaghetti code.
- **UI/UX:** A clean console interface with formatted tables, colors, and easy-to-navigate menus.
- **Validation Layer:** Dedicated classes (`clsInputValidate`, `clsString`, `clsDate`) to handle data validation and formatting gracefully.

## 📂 Project Structure (Sample of Core Classes)
The project is divided into several key components:

**1. Core Entities (Business Logic):**
- `clsPerson`: The base class for all individuals.
- `clsBankClient`: Inherits from `clsPerson`, handles client-specific business logic.
- `clsUser`: Inherits from `clsPerson`, handles system access and permissions.
- `clsCurrency`: Manages currency data and exchange rates.
- `clsDate`: Handles date formatting and calculations.

**2. User Interface (Screens):**
- `clsScreen`: The base class for all UI screens (handles headers, dates, current user info).
- `clsLoginScreen`, `clsMainScreen`.
- Sub-screens like `clsAddNewClientScreen`, `clsTransactionsScreen`, `clsCurrencyExchangeMainScreen`.

**3. Utilities:**
- `clsString`, `clsInputValidate`.

## 🚀 How to Run
1. Clone this repository or download it as a ZIP file.
2. Open the `BankSystemProjectUsingOOP.sln` file in **Visual Studio**.
3. Make sure the data text files (e.g., `Clients.txt`, `Users.txt`, `Currencies.txt`) are in the same directory as the executable.
4. Press `F5` or `Ctrl + F5` to build and run the application.
5. Use the default admin credentials (check the source code or data files) to log in and explore the system.

## 📄 License
This project is open-source and available under the MIT License.
