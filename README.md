# 06 - Programming Foundations Level 2 (C++)

This repository contains my practice code, notes, and implementations for the **06 - Programming Foundations Level 2 (C++)** course from [Programming Advices](https://programmingadvices.com).

## 🎯 Purpose
The goal of this repository is to master advanced C++ concepts—such as debugging, memory management, pointers, vectors, and file handling—and track my continuous progress lesson by lesson.

## 📂 Repository Structure & Topics

| Folder | Topic / Concept | Status |
| :--- | :--- | :---: |
| 🐞 **[01-Debugging](./01-Debugging)** | Mastering Visual Studio debugging tools, breakpoints, call stack, and memory inspection. | ✅ Completed |
| ⚙️ **[02-Functions-Advanced](./02-Functions-Advanced)** | Function declaration vs. definition, default parameters, overloading, and recursion. | 🔄 In Progress |
| 🖨️ **[03-Printing-Formatting](./03-Printing-Formatting)** | Advanced formatting with `printf`, `setw`, and `iomanip` manipulators. | ⏳ Pending |
| 📊 **[04-Arrays-Advanced](./04-Arrays-Advanced)** | Two-dimensional arrays and multi-dimensional data handling. | ⏳ Pending |
| 📦 **[05-Vectors](./05-Vectors)** | Dynamic arrays using `std::vector`, adding/removing elements, and vector iterators. | ⏳ Pending |
| 🧠 **[06-References-Pointers](./06-References-Pointers)** | Call by value vs. reference, pointers arithmetic, pointers with arrays, structs, and functions. | ⏳ Pending |
| 💾 **[07-Dynamic-Memory](./07-Dynamic-Memory)** | Dynamic memory allocation (`new` and `delete`) for variables and arrays. | ⏳ Pending |
| 📝 **[08-Strings-And-Files](./08-Strings-And-Files)** | String object methods, `cctype` functions, and reading/writing/updating text files (`fstream`). | ⏳ Pending |
| 🕒 **[09-Date-And-Time](./09-Date-And-Time)** | Working with local/UTC date and time structures (`ctime`). | ⏳ Pending |

---

## 💡 Key Concepts & Takeaways
* **Memory Management:** Understanding the difference between Stack and Heap memory, and preventing memory leaks.
* **Pointers & References:** Direct memory access and efficient data passing without unnecessary copying.
* **Data Structures:** Transitioning from static arrays to dynamic `std::vector` containers.
* **File I/O:** Persisting data permanently using file streams (`ios::in`, `ios::out`, `ios::app`).
* **Clean Code & Libraries:** Creating custom header files (`.h`) to organize reusable functions.

---

## 🚀 Lesson Implementations & Outputs

- **Lessons #01 to #07 - Mastering Visual Studio Debugging:**
  Practiced tracking program execution, inspecting runtime memory state, modifying variable values live, and stepping through functions (`F10`, `F11`, `Shift+F11`) using Visual Studio debugging tools.

  <img width="1920" height="1080" alt="#1To#7" src="https://github.com/user-attachments/assets/ddc68cab-e5b2-4203-b946-5624fcd81a54" />

- **Lesson #08 - Custom Header Library (`MyLib.h`):**
  Created a reusable custom header file using `#pragma once` and a dedicated `namespace` to organize and call modular functions across projects.

    <img width="863" height="178" alt="Lesson#8" src="https://github.com/user-attachments/assets/5d76e1e5-9162-43fc-a8f6-eb4b40b1afac" />
  
- **Lessons #09 to #13 - Core Language Enhancements & Input Validation:**
  Practiced modern C++ syntax and low-level operators, including:
  * **Ternary Operator (`? :`):** Writing concise single-line and nested conditional expressions.

      <img width="1085" height="229" alt="Positive_Status" src="https://github.com/user-attachments/assets/218a3821-c8c2-4bf2-ab5c-82fa77e48114" />

      <img width="1076" height="188" alt="status_Zero" src="https://github.com/user-attachments/assets/6b414bb7-e921-4099-8d4e-ebb08ee703a9" />

      <img width="1075" height="231" alt="Status_Negative" src="https://github.com/user-attachments/assets/6b3a31b0-b832-48c7-a991-bfb046d15ae1" />
    
  * **Ranged Loops (`for-each`):** Safely iterating over arrays and initializer lists without index bounds errors.

    <img width="1094" height="382" alt="lesson#10" src="https://github.com/user-attachments/assets/1c688514-1c94-4a07-920a-353ab02463ea" />

    
  * **Input Validation (`cin.fail()`):** Built a reusable `ReadNumber()` function in `MyLib.h` using `cin.clear()` and `cin.ignore()` to prevent crashes on invalid non-numeric input.

     <img width="1084" height="240" alt="lesson#11" src="https://github.com/user-attachments/assets/cba54bca-80ed-4de8-9c09-4ebe34cd7b49" />

    
  * **Bitwise Operators (`&`, `|`):** Differentiating binary bit-level operations from logical operators (`&&`, `||`).

     <img width="1064" height="149" alt="Lesson#12" src="https://github.com/user-attachments/assets/71a0a27a-3760-4767-a6c0-12ed8c410d4b" />

     <img width="1097" height="174" alt="Lesson#13" src="https://github.com/user-attachments/assets/824acd28-aebe-45e9-8a27-7d0580b85403" />

- **Lessons #14 to #19 - Advanced Functions & Recursion:**
  Explored function architecture, compile-time polymorphism, call stack behavior, and recursive algorithms:

  * **Function Declaration vs. Definition:** Separating function prototypes above `main()` from implementations below for cleaner code structure.

     <img width="1047" height="126" alt="Lesson#14" src="https://github.com/user-attachments/assets/731719d9-72ea-4714-a514-88c89455aec3" />

  * **Default Parameters:** Designing flexible functions with optional right-to-left default arguments.

      <img width="827" height="166" alt="Lesson#15" src="https://github.com/user-attachments/assets/3b7205ad-b112-4f64-8103-bd4bce571889" />

  * **Function Overloading:** Implementing multiple functions sharing the same name with distinct parameter signatures (`int`, `double`, and varying argument counts).

      <img width="647" height="189" alt="Lesson#16" src="https://github.com/user-attachments/assets/432d8fb0-4ff7-4f1c-b325-d7753d60325d" />

  * **Call Stack, Call Hierarchy & VS Function Tips:** Inspecting runtime function execution order (`LIFO`) and accelerating navigation using Visual Studio shortcuts (`F12`, `Alt+F12`, `Alt+Enter`).
 
  * **Recursion:** Solving repetitive problems—such as ascending/descending number sequences and power calculation (`MyPower`)—using recursive base cases.

      <img width="1104" height="308" alt="Lesson#19" src="https://github.com/user-attachments/assets/3ce822e3-482d-48b1-a5a7-f25ac47af1d3" />

