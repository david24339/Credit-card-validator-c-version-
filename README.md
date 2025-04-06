# Credit-card-validator-c++-version-

# Credit Card Validator (C++ Version)

A lightweight and efficient C++ program that validates credit and debit card numbers using the **Luhn algorithm**, a standard checksum formula widely used in the finance industry.

---

## 🧠 Description

This project implements a credit card validator in C++ that checks the validity of card numbers across major networks, including:

- **VISA**
- **Mastercard**
- **American Express**
- **Discover**

The validation logic is based on **Luhn’s algorithm**, which is the same algorithm used by most banks and financial institutions to detect simple errors in card numbers during transactions.

---

## 🛠 Features

- Validates real-world card numbers using Luhn's algorithm
- Identifies card type based on number format
- Handles both valid and invalid input gracefully
- Supports common card network formats

---

## 🚀 Getting Started

### 🔧 Requirements

- C++ compiler (e.g., `g++`, `clang++`)
- C++11 or later

### 🧪 How to Run

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/Credit-card-validator-cpp-version.git
   cd Credit-card-validator-cpp-version
2. Compile the Program

   Use your terminal to compile the source code:

3. Run the Executable

   Execute the program:

   You’ll be prompted to input a card number, and the program will determine:
	•	If it’s valid
	•	Which card network it likely belongs to

🧮 How Luhn’s Algorithm Works
	1.	Starting from the right, double every second digit.
	2.	If the result is greater than 9, subtract 9 from it.
	3.	Sum all the digits.
	4.	If the total modulo 10 equals 0, the card number is valid.
