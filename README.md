# 🏨 Hotel Cohen - Console Booking Simulation

Welcome to **Hotel Cohen**, a simple C++ console-based hotel booking simulation. This program walks users through booking a room, providing personal info, ordering meals, and confirming payment—all via the terminal.

---

## 📋 Features

- Interactive room booking prompts
- Age verification for eligibility
- Meal ordering with retry logic
- Room selection with error checking
- Simulated payment and balance deduction
- Clean input handling with retries on invalid entries

---

## 💡 How It Works

1. **Start Booking**  
   The program asks if you'd like to book a room.

2. **User Info Input**  
   You're prompted to enter your name and age (must be 18+).

3. **Room Selection**  
   Choose from a list of available rooms.

4. **Optional Meal Order**  
   Select from four meals or skip (with a chance to change your mind).

5. **Stay Duration & Payment**  
   Enter number of nights and your account balance. Each night costs **$300**.

6. **Booking Confirmation**  
   If you have sufficient funds, your balance is deducted, and the room is booked!

---

## 🛠️ How to Compile

To compile and run the program, use a C++ compiler like `g++`.

```bash
g++ -o hotel main.cpp
./hotel

